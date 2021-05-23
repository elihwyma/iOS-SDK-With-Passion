/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject

{
    unsigned long long _cachedHash;
    unsigned long long _priority;
    RERelevanceProviderEnvironment *_environment;
}

+ (id)relevanceSimulatorID;
+ (id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)environment;
- (void)setEnvironment:(id)arg1;
- (id)dictionaryEncoding;
- (unsigned long long)relevancePriority;
- (id)providerWithPriority:(unsigned long long)arg1;

@end
