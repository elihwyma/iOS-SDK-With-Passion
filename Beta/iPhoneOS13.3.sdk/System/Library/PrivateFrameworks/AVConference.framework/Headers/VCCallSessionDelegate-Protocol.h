/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@protocol VCCallSessionDelegate

- (unsigned short)stopVideoSend:error: /* Error: Ran out of types for this method. */;
- (unsigned short)session:withCallID:videoIsDegraded:isRemote: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didChangeRemoteScreenAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)session:changeVideoRulesToCaptureRule:encodeRule:featuresListString: /* Error: Ran out of types for this method. */;
- (unsigned short)session:remoteMediaStalled: /* Error: Ran out of types for this method. */;
- (unsigned short)session:receivedNoPacketsForSeconds: /* Error: Ran out of types for this method. */;
- (unsigned short)session:isSendingAudio:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didChangeLocalVariablesForSession: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didPauseAudio:error: /* Error: Ran out of types for this method. */;
- (unsigned short)session:setRemoteBasebandCodecType:sampleRate: /* Error: Ran out of types for this method. */;
- (unsigned short)session:startAudioWithFarEndVersionInfo:internalFormat:internalSamplesPerFrame:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)session:stopAudioWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didPauseVideo:error: /* Error: Ran out of types for this method. */;
- (unsigned short)currentCameraID;
- (unsigned short)session:connectionDidChangeWithLocalInterfaceType:remoteInterfaceType:callID: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didReceiveData:messageType:withCallID: /* Error: Ran out of types for this method. */;
- (unsigned short)didReceiveCaptions:remoteClient: /* Error: Ran out of types for this method. */;
- (unsigned short)session:withCallID:networkHint: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didStart:connectionType:localInterfaceType:remoteInterfaceType:error: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didStopWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)session:cleanUpWithDelay:error: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteVideoDidPause:callID: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteAudioDidPause:callID: /* Error: Ran out of types for this method. */;
- (unsigned short)session:setMomentsCapabilities:imageType:videoCodec: /* Error: Ran out of types for this method. */;
- (unsigned short)session:localAudioEnabled:withCallID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)session:startVideoSend:captureRuleWifi:captureRuleCell:interface:isUnpausing: /* Error: Ran out of types for this method. */;
- (unsigned short)session:startVideoReceive: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didStopVideoIO:error: /* Error: Ran out of types for this method. */;
- (unsigned short)session:stopVideoReceive:isPausing: /* Error: Ran out of types for this method. */;
- (unsigned short)audioIOFormat;
- (unsigned short)setBWEOptions:UseNewBWEMode:FakeLargeFrameMode:ProbingSenderLog: /* Error: Ran out of types for this method. */;
- (unsigned short)session:remoteAudioEnabled:withCallID: /* Error: Ran out of types for this method. */;
- (unsigned short)session:remoteCallingModeChanged:withCallID: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didReceiveMomentsRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)session:localIPChange:withCallID: /* Error: Ran out of types for this method. */;
- (unsigned short)session:cancelRelayRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)session:initiateRelayRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)session:sendRelayResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)session:packMeters:withLength: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didChangeVideoRule: /* Error: Ran out of types for this method. */;
- (unsigned short)session:receivedRemoteFrame:atTime:withScreenAttributes:videoAttributes:isFirstFrame:isVideoPaused: /* Error: Ran out of types for this method. */;
- (unsigned short)session:didReceiveARPLData:fromCallID: /* Error: Ran out of types for this method. */;

@end
