/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXMutableVideoSession <Swift>

@property (nonatomic) CDStruct_e83c9415 playbackTimeRange;
@property (nonatomic) _Bool seekToBeginningAtEnd;
@property (nonatomic, getter=isLoopingEnabled) _Bool loopingEnabled;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic) _Bool preventsSleepDuringVideoPlayback;
@property (nonatomic) _Bool allowsExternalPlayback;

- (unsigned short)setAudioSessionCategory:options: /* Error: Ran out of types for this method. */;
- (unsigned short)setVolume:withFade: /* Error: Ran out of types for this method. */;

@end
