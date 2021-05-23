/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (NUIContainerView)

@property (nonatomic) struct CGSize minimumLayoutSize;
@property (nonatomic) struct CGSize maximumLayoutSize;
@property (nonatomic) struct UIEdgeInsets customAlignmentRectInsets;
@property (nonatomic) double customBaselineOffsetFromBottom;
@property (nonatomic) double customFirstBaselineOffsetFromTop;
@property (nonatomic) _Bool invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)_didInvalidateIntrinsicContentSize;
- (struct nui_size_cache *)contentLayoutSizeCache;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize)calculateLayoutSizeFittingSize:(struct CGSize)arg1;
- (long long)_nui_baselineViewType;
- (double)effectiveBaselineOffsetFromBottom;
- (CDStruct_6c92d79e)_nui_additionalInsetsForBaselines;
- (double)effectiveFirstBaselineOffsetFromTop;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (_Bool)supportsAsynchronousMeasurement;
- (id)containerViewInfoCreateIfNeeded:(_Bool)arg1;
- (void)setLayoutSize:(struct CGSize)arg1 withContentPriority:(float)arg2;
- (void)setUntransformedFrame:(struct CGRect)arg1;
- (void)nukeContentLayoutSizeCacheFromOrbit;
- (struct UIEdgeInsets)effectiveAlignmentRectInsets;
- (double)effectiveScreenScale;
- (struct CGSize)effectiveMinimumLayoutContentSize;
- (struct CGSize)effectiveMaximumLayoutContentSize;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (double)systemSpacingToAdjecentSiblingView:(id)arg1 axis:(long long)arg2 baselineRelative:(_Bool)arg3 multiplier:(double)arg4;
- (double)systemSpacingToSuperView:(id)arg1 edge:(unsigned long long)arg2 baselineRelative:(_Bool)arg3 multiplier:(double)arg4;
- (id)contentLayoutSizeCacheDescription;
- (_Bool)_nui_isImageView;
- (_Bool)_isContainerView;

@end
