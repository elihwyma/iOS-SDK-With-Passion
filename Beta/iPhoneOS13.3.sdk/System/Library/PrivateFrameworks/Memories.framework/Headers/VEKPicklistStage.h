/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEKPipelineStage.h>

@class NSArray, VEKProduction;

@interface VEKPicklistStage : VEKPipelineStage

{
    VEKProduction *_production;
    NSArray *_featuredPeople;
    double _maximumPossibleMemoryDuration;
}

@property (weak, nonatomic) VEKProduction *production;
@property (retain, nonatomic) NSArray *featuredPeople;
@property (nonatomic, readonly) double maximumPossibleMemoryDuration;

- (id)outputTypes;
- (id)inputTypes;
- (_Bool)needsTitleCard;
- (id)runStageWithInput:(id)arg1;
- (id)memoryClassificationKeys;
- (id)fudgedDurationInfoWithBuckets:(id)arg1 pickList:(id)arg2;
- (long long)pickedItemCountForBuckets:(struct Buckets)arg1 pickList:(id)arg2;
- (double)durationRangeForBuckets:(struct Buckets)arg1;
- (double)maximumPossibleMemoryDurationForPickList:(id)arg1;
- (double)maxDurationRangeForBuckets:(struct Buckets)arg1;
- (double)titleCardDuration;
- (_Bool)memoryClassificationBased;

@end
