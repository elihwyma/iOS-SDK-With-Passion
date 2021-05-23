/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REPriorityRelevanceProvider : RERelevanceProvider

{
    float _priority;
}

@property (nonatomic, readonly) float priority;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithPriority:(float)arg1;
- (id)dictionaryEncoding;

@end
