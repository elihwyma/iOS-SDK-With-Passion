/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UIStackView;

__attribute__((visibility("hidden")))
@interface UIKBStackViewController : UIViewController

@property (nonatomic, readonly) UIStackView *stackView;

- (void)loadView;
- (void)addChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1;

@end
