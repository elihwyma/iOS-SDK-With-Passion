/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, PPMutableAggregatedItem, PPNamedEntity;

@interface _PPNamedEntityNormalization : NSObject

{
    NSMutableDictionary *countByCategory;
    NSCountedSet *countByName;
    PPMutableAggregatedItem *aggregatedRecord;
    PPNamedEntity *entity;
}

- (id)initWithRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;
- (unsigned long long)dominantCategory;
- (id)dominantEntityName;

@end
