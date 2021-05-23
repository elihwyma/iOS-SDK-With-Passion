/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCameraPlaybackEngineObservationOptions;

@interface HFCameraPlaybackEngineObservationState : NSObject

{
    HFCameraPlaybackEngineObservationOptions *_options;
    id _timeObservationToken;
}

@property (retain, nonatomic) HFCameraPlaybackEngineObservationOptions *options;
@property (retain, nonatomic) id timeObservationToken;

@end
