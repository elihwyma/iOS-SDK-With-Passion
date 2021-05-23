/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@protocol VoiceTriggerInterface

- (unsigned short)initializeWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)enableVoiceTriggerListening:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setListeningProperty:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)enableSpeakerStateListening:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)speakerStateActiveReply: /* Error: Ran out of types for this method. */;
- (unsigned short)speakerStateMutedReply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateVoiceTriggerConfiguration:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)voiceTriggerPastDataFramesAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)hasBargeInSupportReply: /* Error: Ran out of types for this method. */;
- (unsigned short)enableBargeInMode:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)listeningEnabledReply: /* Error: Ran out of types for this method. */;

@end
