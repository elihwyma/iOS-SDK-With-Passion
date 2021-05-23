/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol VCSessionDelegate <Swift>

- (unsigned short)vcSession:didStart:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:didStopWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:addParticipantWithID:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:removeParticipantWithID:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:updateConfiguration:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:audioEnabled:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:videoEnabled:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:remoteAudioEnabledDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:remoteVideoEnabledDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:audioPaused:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:videoPaused:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:remoteAudioPausedDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:remoteVideoPausedDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:didChangeProminence:description: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:didDetectError: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSession:participantID:spatialAudioSourceIDDidChange: /* Error: Ran out of types for this method. */;

@end
