/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertController, UIViewController;

__attribute__((visibility("hidden")))
@interface BuddyChoice : NSObject

{
    UIViewController *_nextController;
    NSString *_title;
    Class _nextControllerClass;
    UIViewController *_choiceController;
    CDUnknownBlockType _condition;
    UIAlertController *_alertController;
    CDUnknownBlockType _confirmationCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType condition;
@property (retain, nonatomic) UIAlertController *alertController;
@property (copy, nonatomic) CDUnknownBlockType confirmationCompletion;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) Class nextControllerClass;
@property (weak, nonatomic) UIViewController *choiceController;

- (void)_choiceConfirmed:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 nextItemClass:(Class)arg2;
- (id)confirmationAcceptActionWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)confirmationCancelActionWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)setConfirmationAlert:(id)arg1 condition:(CDUnknownBlockType)arg2;
- (void)runConfirmationIfNeededCompletion:(CDUnknownBlockType)arg1;

@end
