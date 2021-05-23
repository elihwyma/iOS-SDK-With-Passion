/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertController.h>

@protocol UIKBAlertControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAlertController : UIAlertController

{
    id <UIKBAlertControllerDelegate> _kbDelegate;
}

@property (nonatomic) id <UIKBAlertControllerDelegate> kbDelegate;

- (void)viewDidDisappear:(_Bool)arg1;

@end
