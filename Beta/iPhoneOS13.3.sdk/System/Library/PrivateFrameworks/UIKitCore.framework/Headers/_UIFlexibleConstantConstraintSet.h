/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIConstantConstraintSet.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet

{
    NSLayoutConstraint *_minConstraint;
    NSLayoutConstraint *_maxConstraint;
    NSLayoutConstraint *_equalityConstraint;
    _Bool _equalityConstraintPrefersMin;
    double _minConstant;
    double _maxConstant;
    double _equalityConstant;
}

@property (nonatomic) double minConstant;
@property (nonatomic) double maxConstant;
@property (nonatomic) double equalityConstant;

+ (id)constraintSetWithRequiredEqualityConstraint:(id)arg1;
+ (id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2;

- (id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(_Bool)arg3;
- (_Bool)_equalityConstraintIsRequired;
- (void)_updateInequalityConstants;
- (id)_preferredInequalityConstraint;
- (id)_otherInequalityConstraint;

@end
