/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HFCameraPlaybackEngineObservationOptions : NSObject

{
    NSNumber *_periodicTimeUpdateInterval;
}

@property (copy, nonatomic) NSNumber *periodicTimeUpdateInterval;

+ (id)defaultOptions;

@end
