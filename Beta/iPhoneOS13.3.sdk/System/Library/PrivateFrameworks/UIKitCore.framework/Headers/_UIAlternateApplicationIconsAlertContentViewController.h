/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController

{
    UILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *messageText;

- (void)loadView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)arg1;
- (void)__updateWithVisualStyle:(id)arg1;
- (void)_updateWithContainingAlertControllerVisualStyle;

@end
