/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface CCUIContentModuleContainerView : UIView

{
    NSArray *_views;
    _Bool _ignoreFrameUpdates;
    NSString *_moduleIdentifier;
    UIView *_c2AnimationContainerView;
    UIView *_caAnimationContainerView;
}

@property (copy, nonatomic, readonly) NSString *moduleIdentifier;
@property (nonatomic, readonly) UIView *c2AnimationContainerView;
@property (nonatomic, readonly) UIView *caAnimationContainerView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) _Bool ignoreFrameUpdates;

- (void)layoutSubviews;
- (id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2;

@end
