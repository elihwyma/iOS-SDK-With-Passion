/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController

{
    NSArray *_keyCommands;
    struct __GSKeyboard *_keyboard;
}

@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDView *view;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)_updateVisualStyle;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard *)arg2;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;

@end
