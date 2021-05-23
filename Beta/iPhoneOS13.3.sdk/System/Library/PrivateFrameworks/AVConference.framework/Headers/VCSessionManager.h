/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject

{
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *sessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (id)participantConfigFromXPCDictionary:(id)arg1;
- (void)vcSession:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(_Bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeProminence:(unsigned char)arg3 description:(id)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 spatialAudioSourceIDDidChange:(unsigned long long)arg3;
- (id)sessionForUUID:(id)arg1;
- (id)sessionForStreamToken:(unsigned int)arg1;

@end
