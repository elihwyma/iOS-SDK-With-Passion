/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBAppLayout, SBOrientationTransformWrapperView;

@protocol SBAppSwitcherTransientOverlayPageContentViewDelegate;

@interface SBAppSwitcherTransientOverlayPageContentView : UIView

{
    SBOrientationTransformWrapperView *_contentWrapperView;
    long long _orientation;
    _Bool _active;
    _Bool _visible;
    SBAppLayout *_appLayout;
    UIView *_contentView;
    id <SBAppSwitcherTransientOverlayPageContentViewDelegate> _delegate;
}

@property (copy, nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic) long long contentOrientation;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id <SBAppSwitcherTransientOverlayPageContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _Bool contentRequiresGroupOpacity;

- (void)invalidate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 appLayout:(id)arg2;

@end
