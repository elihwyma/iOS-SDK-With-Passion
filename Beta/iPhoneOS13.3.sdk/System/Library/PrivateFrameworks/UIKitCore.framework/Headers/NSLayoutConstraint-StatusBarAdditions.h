/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSLayoutConstraint.h>

@class _NSLayoutConstraintConstant;

@interface NSLayoutConstraint (StatusBarAdditions)

@property (getter=_encodedConstant, setter=_setEncodedConstant:) _NSLayoutConstraintConstant *encodedConstant;

+ (double)_constraintConstantLimit;
+ (_Bool)_UIWantsMarginAttributeSupport;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;

- (id)_uiSecondRefView;
- (id)_uiFirstRefView;
- (id)_ui_constraintWithPriority:(float)arg1;
- (id)_ola_dimensionRefItem;
- (id)_ola_dimensionItem;
- (id)spacingMultiplier;
- (void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(_Bool)arg2;
- (id)_baselineLoweringInfoForFirstItem:(_Bool)arg1;
- (id)_debuggableEquationBaseDescription;
- (id)_debuggableEquationLegendDescription;
- (id)_debuggableEquationDescriptionWithoutLegend;

@end
