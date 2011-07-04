//
//  MadServeAdBrowserViewController.h
//
//  Created by Oliver Drobnik on 9/24/10.
//  Copyright 2010 Drobnik.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CLOSE_BUTTON_DATA @"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";

@class MadServeAdBrowserViewController;

@protocol MadServeAdBrowserViewController <NSObject>

- (void)MadServeAdBrowserControllerDidDismiss:(MadServeAdBrowserViewController *)MadServeAdBrowserController;

@end



@interface MadServeAdBrowserViewController : UIViewController <UIWebViewDelegate>
{
	UIWebView *_webView;
	NSURL *_url;
	
	// manual loading
	NSString *userAgent;
	NSString *mimeType;
	NSString *textEncodingName;
	NSMutableData *receivedData;
	
	id <MadServeAdBrowserViewController> delegate;
}

@property (nonatomic, retain) NSString *userAgent;
@property (nonatomic, readonly, retain) NSURL  *url;

@property (nonatomic, retain) UIWebView *webView;

@property (nonatomic, assign) id <MadServeAdBrowserViewController> delegate;

- (id)initWithUrl:(NSURL *)url;
//- (id)initWithHTML:(NSString *)html baseURL:(NSURL *)url

@end
