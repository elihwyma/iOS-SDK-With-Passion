/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@protocol RCTimeController;

@protocol RCWaveformRendererDelegate <Swift>

@property (nonatomic) double currentTime;
@property (nonatomic, readonly) id <RCTimeController> activeTimeController;
@property (nonatomic) double desiredTimeDeltaForVisibleTimeRange;

- (unsigned short)duration;
- (unsigned short)isZooming;
- (unsigned short)waveformRenderer:contentWidthDidChange: /* Error: Ran out of types for this method. */;

@end
