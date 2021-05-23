/*
 Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject

{
    _Bool _blockMultipleIncomingInvitations;
    _Bool _blockOutgoingInvitationsDuringCall;
    _Bool _blockIncomingInvitationsDuringCall;
    NSMutableArray *_delegates;
}

@property (retain, nonatomic) NSMutableArray *_delegates;
@property (nonatomic, readonly) _Bool _ready;
@property (nonatomic, readonly) _Bool hasActiveConference;
@property (nonatomic, readonly) _Bool hasRunningConference;
@property (nonatomic, readonly) unsigned int overallChatState;
@property (nonatomic, readonly) _Bool cameraCapable;
@property (nonatomic, readonly) _Bool microphoneCapable;
@property (nonatomic, readonly) _Bool cameraConnected;
@property (nonatomic, readonly) _Bool microphoneConnected;
@property (nonatomic) _Bool blockMultipleIncomingInvitations;
@property (nonatomic) _Bool blockIncomingInvitationsDuringCall;
@property (nonatomic) _Bool blockOutgoingInvitationsDuringCall;
@property (nonatomic, readonly) NSArray *delegates;
@property (nonatomic) id <IMAVControllerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (_Bool)_shouldRunConferences;
- (_Bool)_shouldRunACConferences;
- (_Bool)_shouldObserveConferences;
- (void)pushCachedVCCapsToDaemon;
- (void)_dumpCaps;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 reason:(id)arg5;
- (void)updateActiveConference;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;
- (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
- (void)_receivedPendingACRequests;
- (void)_receivedPendingVCRequests;
- (void)setupIMAVController;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2;
- (void)setHasRunningConference:(_Bool)arg1;
- (void)setHasActiveConference:(_Bool)arg1;
- (void)requestPendingVCInvitations;
- (void)requestPendingACInvitations;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1;

@end
