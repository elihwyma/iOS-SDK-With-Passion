/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIAlertControllerShadowedScrollView.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView

{
    NSArray *_constraints;
    UIView *_contentView;
}

@property (nonatomic, readonly) UIView *contentView;

- (id)initWithContentView:(id)arg1;
- (void)updateConstraints;
- (void)accessoryInsetsDidChange:(struct UIEdgeInsets)arg1;
- (double)_contentFitCanScrollThreshold;

@end
