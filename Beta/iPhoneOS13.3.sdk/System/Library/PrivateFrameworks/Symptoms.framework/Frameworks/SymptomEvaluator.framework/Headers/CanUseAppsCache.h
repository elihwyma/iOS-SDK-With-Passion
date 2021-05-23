/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CanUseAppsCache : NSObject

{
    NSMutableDictionary *cache;
    _Bool disabled;
}

+ (_Bool)makeVerdictFromRationaleCode:(int)arg1;

- (id)init;
- (id)description;
- (void)disable;
- (void)enable;
- (id)_makeKeyFrom:(id)arg1 state:(long long)arg2;
- (_Bool)hasEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int *)arg3;
- (void)insertEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int)arg3;

@end
