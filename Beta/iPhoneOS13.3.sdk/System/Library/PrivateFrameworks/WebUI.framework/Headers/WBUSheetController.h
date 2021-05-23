/*
 Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <NSObject.h>

@class NSMutableArray, UIAlertController, WebUIAlert;

@interface WBUSheetController : NSObject

{
    UIAlertController *_alertController;
    WebUIAlert *_alert;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
}

+ (id)alertControllerForAlert:(id)arg1 automaticallyDismiss:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

- (void)setDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)_alertDidDismissWithAction:(int)arg1;
- (void)showSheetForAlert:(id)arg1;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)hideSheet;

@end
