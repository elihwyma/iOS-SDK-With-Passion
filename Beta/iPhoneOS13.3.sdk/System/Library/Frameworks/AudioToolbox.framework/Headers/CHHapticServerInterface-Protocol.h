/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@protocol CHHapticServerInterface

- (unsigned short)stopPrewarm;
- (unsigned short)stopRunning;
- (unsigned short)loadHapticEvent:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)createCustomAudioEvent:format:frames:options:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCustomAudioEvent:options:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCustomAudioEvent:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarm: /* Error: Ran out of types for this method. */;
- (unsigned short)startRunning: /* Error: Ran out of types for this method. */;
- (unsigned short)stopRunning: /* Error: Ran out of types for this method. */;
- (unsigned short)removeChannel:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestChannels:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)releaseChannels;
- (unsigned short)setPlayerBehavior:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setSessionID:isShared:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)allocateClientResources: /* Error: Ran out of types for this method. */;
- (unsigned short)releaseClientResources;
- (unsigned short)getHapticLatency: /* Error: Ran out of types for this method. */;
- (unsigned short)setChannelEventBehavior:behavior:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)loadHapticSequenceFromData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)loadHapticSequenceFromEvents:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)loadVibePattern:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setSequenceEventBehavior:behavior:channelIndex:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareHapticSequence:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)detachSequence: /* Error: Ran out of types for this method. */;
- (unsigned short)debugExpectNotifyOnFinishAfter:reply: /* Error: Ran out of types for this method. */;

@end
