/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSNowPlayingStreamEventClusteringParameters : NSObject

{
    double _minimumClusteringTimeInSeconds;
    unsigned long long _algorithm;
}

@property (nonatomic) double minimumClusterTimeInSeconds;
@property (nonatomic) unsigned long long algorithm;

- (id)init;

@end
