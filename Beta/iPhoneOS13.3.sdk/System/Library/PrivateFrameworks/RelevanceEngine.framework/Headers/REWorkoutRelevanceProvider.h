/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REWorkoutRelevanceProvider : RERelevanceProvider

{
    unsigned long long _state;
}

@property (nonatomic, readonly) unsigned long long state;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithState:(unsigned long long)arg1;
- (id)dictionaryEncoding;

@end
