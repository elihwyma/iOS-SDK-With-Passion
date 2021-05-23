/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCXPCClientShared;

@protocol AVCSessionParticipantDelegate, OS_dispatch_queue;

@interface AVCSessionParticipant : NSObject

{
    unsigned long long _idsParticipantID;
    NSString *_participantID;
    NSData *_participantData;
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    VCXPCClientShared *_connection;
    NSData *_frequencyLevels;
    long long _videoToken;
    unsigned long long spatialAudioSourceID;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    NSMutableDictionary *_participantConfig;
    _Bool _audioMuted;
    _Bool _audioEnabled;
    _Bool _audioPaused;
    _Bool _videoEnabled;
    _Bool _videoPaused;
    float _volume;
    float _audioPosition;
    _Bool _configurationInProgress;
    _Bool _hasPendingChanges;
    unsigned long long _spatialAudioSourceID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (nonatomic) long long videoToken;
@property (nonatomic) unsigned long long spatialAudioSourceID;
@property (retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (nonatomic, readonly) NSDictionary *config;
@property (nonatomic) _Bool configurationInProgress;
@property (nonatomic) _Bool hasPendingChanges;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) id <AVCSessionParticipantDelegate> delegate;
@property (nonatomic) float audioPosition;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (nonatomic, readonly) unsigned long long participantID;
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
- (void)registerBlocksForNotifications;
- (_Bool)isConnectedToSession;
- (void)deregisterFromNotifications;
- (void)setupNotificationQueue:(id)arg1;
- (void)setupConfig;
- (void)setStateVideoEnabled:(_Bool)arg1;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (void)setStateAudioEnabled:(_Bool)arg1;
- (void)setStateAudioPaused:(_Bool)arg1;
- (void)setStateVideoPaused:(_Bool)arg1;
- (id)initWithParticipantID:(unsigned long long)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4;

@end
