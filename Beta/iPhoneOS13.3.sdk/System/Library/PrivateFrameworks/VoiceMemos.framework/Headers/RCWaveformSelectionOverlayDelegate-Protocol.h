/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@protocol RCWaveformSelectionOverlayDelegate <Swift>

- (unsigned short)waveformSelectionOverlay:willBeginTrackingSelectionBeginTime:endTime:assetCurrentTime: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformSelectionOverlay:didFinishTrackingSelectionBeginTime:endTime:assetCurrentTime: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformSelectionOverlay:willChangeSelectedTimeRange:isTrackingMin:isTrackingMax: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformSelectionOverlay:willChangeAssetCurrentTime:isTracking: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformSelectionOverlay:offsetForTime: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformSelectionOverlay:timeForOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)waveformSelectionOverlayGetCurrentTime: /* Error: Ran out of types for this method. */;

@end
