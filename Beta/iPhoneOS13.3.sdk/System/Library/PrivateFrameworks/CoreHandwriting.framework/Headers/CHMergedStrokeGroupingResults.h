/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult

{
    NSDictionary *_groupingResultsByStrategyIdentifier;
}

@property (retain, nonatomic, readonly) NSDictionary *groupingResultsByStrategyIdentifier;

- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;

@end
