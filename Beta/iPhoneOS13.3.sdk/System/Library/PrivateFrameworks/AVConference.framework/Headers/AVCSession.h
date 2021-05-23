/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCSessionConfiguration, AVCSessionParticipant, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, VCXPCClientShared;

@protocol AVCSessionDelegate, OS_dispatch_queue;

@interface AVCSession : NSObject

{
    NSMutableDictionary *_remoteParticipants;
    NSMutableDictionary *_participantsToAdd;
    AVCSessionParticipant *_localParticipant;
    AVCSessionConfiguration *_configuration;
    NSString *_transportToken;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCXPCClientShared *_connection;
    long long _sessionToken;
    NSDictionary *_capabilities;
    NSString *_uuid;
    NSData *_frequencyLevels;
    int _activeConfigurationCount;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCSessionConfiguration *configuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (nonatomic, readonly) NSMutableDictionary *remoteParticipantsMap;
@property (nonatomic, readonly) NSMutableDictionary *participantsToAdd;
@property (nonatomic, readonly) AVCSessionParticipant *localParticipant;
@property (nonatomic, readonly) VCXPCClientShared *xpcConnection;
@property (nonatomic, readonly) long long sessionToken;
@property (nonatomic, readonly) NSArray *remoteParticipants;
@property (nonatomic) id <AVCSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSData *negotiationData;
@property (nonatomic, getter=isAudioMuted) _Bool audioMuted;
@property (nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property (nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSData *frequencyLevels;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)updateConfiguration:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)stopWithError:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)registerBlocksForNotifications;
- (void)participant:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)participant:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)participant:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)participant:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;
- (void)deregisterFromNotifications;
- (void)setupNotificationQueue:(id)arg1;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (id)initPrivateWithTransportToken:(id)arg1 configuration:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 queue:(id)arg5;
- (_Bool)validateParticipantToAdd:(id)arg1;
- (_Bool)validateParticipantToRemove:(id)arg1;
- (id)initWithTransportToken:(id)arg1 configuration:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 queue:(id)arg5;
- (id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (void)beginParticipantConfiguration;
- (void)endParticipantConfiguration;
- (void)participant:(id)arg1 frequencyLevelsDidChange:(id)arg2;

@end
