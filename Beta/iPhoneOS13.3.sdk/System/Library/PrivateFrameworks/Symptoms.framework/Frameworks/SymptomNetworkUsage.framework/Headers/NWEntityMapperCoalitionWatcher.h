/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NWEntityMapperCoalitionWatcher : NWEntityMapper

{
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (id)init;
- (id)identifierForUUID:(id)arg1 derivation:(int *)arg2;
- (void)_uuidCoalitionNameMapPrune;
- (_Bool)noteUUID:(id)arg1 forPid:(int)arg2;

@end
