/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NWEntityMapperProcessWatcher : NWEntityMapper

{
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

- (id)init;
- (id)stateDictionary;
- (id)identifierForUUID:(id)arg1 derivation:(int *)arg2;
- (void)_uuidProcessNameMapPrune;
- (void)noteUUID:(id)arg1 forProcessName:(id)arg2;

@end
