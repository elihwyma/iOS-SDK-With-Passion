/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class ICAppearanceInfo, ICViewControllerManager, UIColor, UITraitCollection, UIWindowScene;

@interface UIView (IC)

@property (nonatomic, readonly) ICViewControllerManager *ic_viewControllerManager;
@property (nonatomic, readonly) _Bool ic_isRTL;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets ic_directionalSafeAreaInsets;
@property (copy, nonatomic) UIColor *ic_backgroundColor;
@property (nonatomic, readonly) UITraitCollection *ic_platformAppearanceObject;
@property (nonatomic, readonly) ICAppearanceInfo *ic_appearanceInfo;
@property (nonatomic, readonly) UIWindowScene *ic_windowScene;

+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)ic_performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (void)ic_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

- (double)ic_backingScaleFactor;
- (void)ic_setNeedsDisplay;
- (_Bool)ic_isInSecureWindow;
- (id)ic_imageRenderedFromLayer;
- (id)ic_imageRenderedFromViewHierarchy;
- (id)ic_renderImage;
- (void)ic_crashIfWindowIsSecure;
- (id)ic_imageViewRenderedFromLayer;
- (id)ic_imageViewRenderedFromViewHierarchy;
- (void)ic_removeAllConstraintsForSubview:(id)arg1;
- (void)ic_addConstraintsToFillSuperview;
- (id)ic_renderImageView;
- (id)ic_animator;
- (void)ic_setNeedsLayout;
- (void)ic_setAlpha:(double)arg1;
- (void)ic_insertSubview:(struct UIView *)arg1 belowSubview:(struct UIView *)arg2;

@end
