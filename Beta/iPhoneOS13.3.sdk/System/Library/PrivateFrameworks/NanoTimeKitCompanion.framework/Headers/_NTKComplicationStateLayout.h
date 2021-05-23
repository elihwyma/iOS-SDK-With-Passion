/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NTKComplicationLayoutRule;

@interface _NTKComplicationStateLayout : NSObject

{
    NSMutableDictionary *_overrideRules;
    NTKComplicationLayoutRule *_defaultRule;
}

@property (retain, nonatomic) NTKComplicationLayoutRule *defaultRule;

- (void)dealloc;
- (void)setRule:(id)arg1 forLayoutOverride:(long long)arg2;
- (id)ruleForLayoutOverride:(long long)arg1;

@end
