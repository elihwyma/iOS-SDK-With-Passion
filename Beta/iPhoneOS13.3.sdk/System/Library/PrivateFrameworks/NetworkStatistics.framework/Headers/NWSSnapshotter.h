/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <Foundation/NSObject.h>

@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject

{
    unsigned long long _kernelSourceRef;
    NWSSnapshotSource *_snapshotSource;
}

@property unsigned long long kernelSourceRef;
@property (retain) NWSSnapshotSource *snapshotSource;

- (id)snapshot;

@end
