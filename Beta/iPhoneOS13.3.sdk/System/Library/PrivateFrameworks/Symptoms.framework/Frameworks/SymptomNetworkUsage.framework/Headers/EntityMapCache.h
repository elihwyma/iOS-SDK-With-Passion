/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EntityMapCache : NSObject

{
    NSMutableDictionary *_uuidMap;
    unsigned int _capacityLimit;
    unsigned int _pruneSize;
    double _hitRetainTime;
    double _missRetainTime;
}

@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int capacityLimit;
@property unsigned int pruneSize;

- (id)init;
- (id)description;
- (void)pruneCache;
- (id)stateDictionary;
- (id)entryForUUID:(id)arg1;
- (void)setEntry:(id)arg1 forUUID:(id)arg2;

@end
