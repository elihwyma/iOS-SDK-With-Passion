/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphEdge.h>

@class NSDate;

@interface PGGraphBusinessEdge : PGGraphEdge

@property (nonatomic, readonly) _Bool hasRoutineInfo;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;

@end
