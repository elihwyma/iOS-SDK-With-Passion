/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController

{
    _Bool _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (void)dealloc;
- (_Bool)presentSheet;
- (void)doneWithSheet;
- (id)initWithUIWebDocumentView:(id)arg1;
- (void)_enableWebView;
- (void)_disableWebView;

@end
