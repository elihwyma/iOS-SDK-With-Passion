/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <FindMyDevice/Swift-Protocol.h>

@class NSString, NSURL;

@protocol FMDAudioAccessory <Swift>

@property (nonatomic, readonly) unsigned long long inEar;
@property (nonatomic, readonly) NSString *audioRoutingIdentifier;
@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic, readonly) _Bool playingSound;

- (unsigned short)updateAudioAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePlaybackChannels: /* Error: Ran out of types for this method. */;

@end
