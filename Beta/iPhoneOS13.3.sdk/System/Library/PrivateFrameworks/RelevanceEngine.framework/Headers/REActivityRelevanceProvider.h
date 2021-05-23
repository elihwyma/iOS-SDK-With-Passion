/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REActivityRelevanceProvider : RERelevanceProvider

{
    _Bool _closedActiveEngergy;
    _Bool _closedExerciseTime;
    _Bool _closedStandHour;
}

@property (nonatomic, readonly) _Bool closedActiveEngergy;
@property (nonatomic, readonly) _Bool closedExerciseTime;
@property (nonatomic, readonly) _Bool closedStandHour;

+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithActiveEnergyState:(_Bool)arg1 exerciseTimeState:(_Bool)arg2 standHourState:(_Bool)arg3;

@end
