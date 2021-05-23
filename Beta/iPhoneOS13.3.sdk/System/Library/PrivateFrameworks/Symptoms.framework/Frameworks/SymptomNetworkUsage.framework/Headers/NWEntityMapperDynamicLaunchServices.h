/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <SymptomNetworkUsage/NWEntityMapperNEHelper.h>

@class EntityMapCache;

__attribute__((visibility("hidden")))
@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper

{
    EntityMapCache *_entityMap;
}

- (id)init;
- (id)stateDictionary;
- (id)identifierForUUID:(id)arg1 derivation:(int *)arg2;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)arg1;
- (id)_identifierForUUID:(id)arg1 fromSet:(id)arg2;
- (id)handleNewUUID:(id)arg1;

@end
