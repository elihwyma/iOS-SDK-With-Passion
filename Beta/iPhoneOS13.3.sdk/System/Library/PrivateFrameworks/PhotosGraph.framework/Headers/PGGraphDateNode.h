/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphNode

{
    PGGraphSeasonNode *_seasonNode;
}

@property (nonatomic, readonly) PGGraphSeasonNode *seasonNode;
@property (readonly) long long day;
@property (readonly) long long month;
@property (readonly) long long year;

+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;

- (id)associatedNodesForRemoval;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)localDate;
- (void)enumerateHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)sameWeekDateNodes;
- (id)lastWeekDateNodes;

@end
