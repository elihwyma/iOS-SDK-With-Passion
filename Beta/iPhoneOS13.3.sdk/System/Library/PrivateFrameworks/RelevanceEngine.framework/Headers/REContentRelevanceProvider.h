/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSArray;

@interface REContentRelevanceProvider : RERelevanceProvider

{
    NSArray *_keywords;
}

@property (nonatomic, readonly) NSArray *keywords;

+ (id)relevanceSimulatorID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithContent:(id)arg1;
- (id)dictionaryEncoding;
- (id)initWithKeywords:(id)arg1;

@end
