/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@protocol RCTimeController;

@protocol RCWaveformViewDelegate <Swift>

@property (retain, nonatomic, readonly) id <RCTimeController> activeTimeController;

- (unsigned short)waveformViewController:didScrubToTime:finished: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformViewControllerWillBeginEditingSelectedTimeRange: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformViewControllerDidEndEditingSelectedTimeRange: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformViewController:didChangeToSelectedTimeRange: /* Error: Ran out of types for this method. */;

@end
