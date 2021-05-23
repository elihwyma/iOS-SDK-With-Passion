/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKLayoutRule.h>

@interface NTKComplicationLayoutRule : NTKLayoutRule

{
    struct UIEdgeInsets _keylinePadding;
}

@property (nonatomic, readonly) struct UIEdgeInsets keylinePadding;

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5 clip:(_Bool)arg6 transform:(struct CGAffineTransform)arg7;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(struct UIEdgeInsets)arg5 clip:(_Bool)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
