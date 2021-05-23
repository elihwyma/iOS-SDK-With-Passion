/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REDailyRoutineRelevanceProvider : RERelevanceProvider

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)relevanceSimulatorID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithDailyRoutineType:(unsigned long long)arg1;

@end
