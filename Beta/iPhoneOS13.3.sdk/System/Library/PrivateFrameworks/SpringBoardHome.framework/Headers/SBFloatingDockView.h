/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBDockIconListView, SBFloatingDockPlatterView, UIView;

@interface SBFloatingDockView : SBFTouchPassThroughView

{
    SBDockIconListView *_userIconListView;
    SBDockIconListView *_recentIconListView;
    double _platterVerticalMargin;
    unsigned long long _minimumUserIconSpaces;
    SBFloatingDockPlatterView *_mainPlatterView;
    UIView *_dividerView;
    UIView *_touchReceivingView;
    double _iconContentScale;
    struct UIEdgeInsets _paddingEdgeInsets;
}

@property (retain, nonatomic) SBFloatingDockPlatterView *mainPlatterView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIView *touchReceivingView;
@property (nonatomic) double iconContentScale;
@property (nonatomic, readonly) double maximumDockContinuousCornerRadius;
@property (nonatomic, readonly) struct CGSize maximumIconSize;
@property (nonatomic, readonly) double maximumPlatterHeight;
@property (nonatomic, readonly) double maximumInterIconSpacing;
@property (retain, nonatomic) SBDockIconListView *userIconListView;
@property (retain, nonatomic) SBDockIconListView *recentIconListView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets paddingEdgeInsets;
@property (nonatomic) double platterVerticalMargin;
@property (nonatomic) unsigned long long minimumUserIconSpaces;
@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, readonly) double interIconSpacing;
@property (nonatomic, readonly) struct CGRect platterFrame;
@property (nonatomic) _Bool hasPlatterShadow;
@property (nonatomic, readonly) struct UIEdgeInsets platterShadowOutsets;

+ (double)_referenceInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)maximumInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)maximumDockContinuousCornerRadiusWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (struct CGSize)maximumIconSizeWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)maximumPlatterHeightWithIconImageInfo:(struct SBIconImageInfo)arg1;
+ (double)contentHeightForBounds:(struct CGRect)arg1 mainPlatterViewFrame:(struct CGRect)arg2;
+ (void)getMetrics:(CDStruct_c0971cc5 *)arg1 forBounds:(struct CGRect)arg2 numberOfUserIcons:(unsigned long long)arg3 numberOfRecentIcons:(unsigned long long)arg4 paddingEdgeInsets:(struct UIEdgeInsets)arg5 referenceIconSize:(struct CGSize)arg6 maximumIconSize:(struct CGSize)arg7 referenceInterIconSpacing:(double)arg8 maximumInterIconSpacing:(double)arg9 platterVerticalMargin:(double)arg10;
+ (double)minimumPlatterMargin;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)bounce;
- (double)contentHeightForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)platterShadowOutsetsForBounds:(struct CGRect)arg1;
- (struct SBIconImageInfo)_iconImageInfo;
- (void)updateDividerVisualStyling;
- (void)getMetrics:(CDStruct_c0971cc5 *)arg1 forBounds:(struct CGRect)arg2;
- (struct CGSize)_referenceIconSize;
- (double)_referenceInterIconSpacing;
- (double)iconContentScaleForNumberOfUserIcons:(unsigned long long)arg1;

@end
