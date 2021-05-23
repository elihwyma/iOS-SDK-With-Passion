/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HKCFGNodeCache : NSObject

{
    NSMutableDictionary *_cache;
}

- (id)init;
- (id)nodesForPosition:(unsigned long long)arg1 nonTerminal:(id)arg2 withLengthAllowance:(unsigned long long)arg3;
- (void)cacheNodes:(id)arg1 forPosition:(unsigned long long)arg2 nonTerminal:(id)arg3 lengthAllowance:(unsigned long long)arg4;

@end
