/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol VCAudioIOControllerDelegate <Swift>

- (unsigned short)didStart:error: /* Error: Ran out of types for this method. */;
- (unsigned short)controllerFormatChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)didStop:error: /* Error: Ran out of types for this method. */;
- (unsigned short)spatialAudioSourceIDChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)didResume;
- (unsigned short)didSuspend;

@end
