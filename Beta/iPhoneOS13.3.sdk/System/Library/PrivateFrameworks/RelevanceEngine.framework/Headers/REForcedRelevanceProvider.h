/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REForcedRelevanceProvider : RERelevanceProvider

{
    _Bool _isHistoric;
    float _relevance;
}

@property (nonatomic, readonly) float relevance;
@property (nonatomic, readonly) _Bool isHistoric;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithForcedRelevance:(float)arg1 isHistoric:(_Bool)arg2;
- (id)initWithForcedRelevance:(float)arg1;

@end
