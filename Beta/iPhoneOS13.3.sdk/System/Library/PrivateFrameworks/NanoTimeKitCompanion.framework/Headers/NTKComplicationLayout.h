/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class _NTKComplicationStateLayout;

@interface NTKComplicationLayout : NSObject

{
    _NTKComplicationStateLayout *_stateLayouts[4];
}

+ (id)layoutWithDefaultRule:(id)arg1;

- (void)dealloc;
- (void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2;
- (void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3;
- (id)defaultLayoutRuleForState:(long long)arg1;
- (id)_layoutForState:(long long)arg1;
- (id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2;

@end
