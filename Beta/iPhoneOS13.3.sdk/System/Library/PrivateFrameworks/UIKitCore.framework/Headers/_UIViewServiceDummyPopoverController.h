/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverController.h>

@protocol _UIViewServiceDummyPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDummyPopoverController : UIPopoverController

{
    id <_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;
}

@property (weak, nonatomic) id <_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;

+ (Class)_popoverViewClass;

- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;
- (_Bool)_attemptsToAvoidKeyboard;
- (void)_popoverView:(id)arg1 didSetUseToolbarShine:(_Bool)arg2;
- (void)_super_setPopoverContentSize:(struct CGSize)arg1;

@end
