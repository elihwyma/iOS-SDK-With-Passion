/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol VCSessionParticipantDelegate <Swift>

- (unsigned short)vcSessionParticipant:audioPaused:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:videoPaused:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:remoteVideoEnabledDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:didRequestVideoRedundancy: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipantDidChangeActualNetworkBitrateVideo: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipantDidChangeActualNetworkBitrateAudio: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipantDidMediaDecryptionTimeOut: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:didSwitchFromStreamID:toStreamID: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipantDidChangeReceivingStreams: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:didChangeProminence:description: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:remoteAudioEnabledDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:remoteAudioPausedDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:remoteVideoPausedDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:audioEnabled:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:videoEnabled:didSucceed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:requestKeyFrameGenerationWithStreamID: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipantDidChangeSendingStreams: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:didDetectError: /* Error: Ran out of types for this method. */;
- (unsigned short)vcSessionParticipant:spatialAudioSourceIDDidChange: /* Error: Ran out of types for this method. */;

@end
