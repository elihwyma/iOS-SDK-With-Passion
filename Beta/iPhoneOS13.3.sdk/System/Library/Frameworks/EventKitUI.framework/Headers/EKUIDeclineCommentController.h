/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class UIAlertController, UITextField;

@interface EKUIDeclineCommentController : NSObject

{
    UIAlertController *_alertController;
    UITextField *_alertTextField;
    CDUnknownBlockType _completionBlock;
}

+ (id)_newDeclineCommentControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3;
- (void)_completeWithButton:(unsigned long long)arg1;

@end
