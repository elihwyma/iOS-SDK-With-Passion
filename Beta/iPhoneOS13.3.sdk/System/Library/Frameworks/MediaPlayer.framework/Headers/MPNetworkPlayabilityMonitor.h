/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface MPNetworkPlayabilityMonitor : NSObject

{
    long long _effectiveNetworkTypeForCloudPlayback;
    long long _networkType;
    double _lastAverageBitrate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) double lastAverageBitrate;
@property (nonatomic, readonly) long long networkType;
@property (nonatomic, readonly) long long effectiveNetworkTypeForPlayback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedNetworkPlayabilityMonitor;

- (id)init;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;

@end
