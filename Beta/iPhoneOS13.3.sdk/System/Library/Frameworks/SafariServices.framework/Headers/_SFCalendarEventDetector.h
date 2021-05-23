/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKWebView;

@interface _SFCalendarEventDetector : NSObject

{
    WKWebView *_webView;
    CDUnknownBlockType _checkForCalendarEventsBlock;
}

- (id)initWithWebView:(id)arg1;
- (void)cancelCheckForConfirmationPage;
- (void)_checkIfPageContainsCalendarEvent;
- (void)_foundCalendarEvents:(id)arg1;
- (void)checkIfPageContainsCalendarEvent;

@end
