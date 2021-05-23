/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@interface PGGraphDayOfWeekNode : PGGraphNode

{
    long long _dayOfWeek;
}

@property (nonatomic) long long dayOfWeek;

+ (long long)dayOfWeekForName:(id)arg1;
+ (id)nameForDayOfWeek:(long long)arg1;

@end
