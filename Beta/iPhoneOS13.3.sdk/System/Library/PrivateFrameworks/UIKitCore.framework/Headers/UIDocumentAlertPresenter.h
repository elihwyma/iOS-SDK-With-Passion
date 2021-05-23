/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDocumentAlertPresenter : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    UIAlertView *_alert;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)_forceFinishNow;

@end
