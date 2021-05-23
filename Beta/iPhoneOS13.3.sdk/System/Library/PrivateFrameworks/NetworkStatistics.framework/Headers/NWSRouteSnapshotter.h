/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <NetworkStatistics/NWSSnapshotter.h>

@interface NWSRouteSnapshotter : NWSSnapshotter

- (id)snapshot;
- (id)initWithSource:(id)arg1 dest:(id)arg2 mask:(id)arg3 ifindex:(int)arg4;

@end
