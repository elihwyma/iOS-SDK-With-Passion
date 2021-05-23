/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <ReplayKit/Swift-Protocol.h>

@protocol RPClientProtocol <Swift>

- (unsigned short)recordingTimerDidUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)recordingLockInterrupted: /* Error: Ran out of types for this method. */;
- (unsigned short)updateScreenRecordingStateWithCurrentState: /* Error: Ran out of types for this method. */;
- (unsigned short)recordingDidStopWithError:movieURL: /* Error: Ran out of types for this method. */;
- (unsigned short)recordingDidPause;
- (unsigned short)recordingShouldResume;
- (unsigned short)captureHandlerWithSample:timingData: /* Error: Ran out of types for this method. */;
- (unsigned short)captureHandlerWithAudioSample:bufferType: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBroadcastURL: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBroadcastServiceInfo: /* Error: Ran out of types for this method. */;

@end
