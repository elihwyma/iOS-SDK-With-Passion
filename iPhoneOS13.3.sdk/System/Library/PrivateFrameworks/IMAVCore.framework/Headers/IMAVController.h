//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol IMAVControllerDelegate;

@interface IMAVController : NSObject
{
    BOOL _blockMultipleIncomingInvitations;
    BOOL _blockOutgoingInvitationsDuringCall;
    BOOL _blockIncomingInvitationsDuringCall;
    NSMutableArray *_delegates;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL blockIncomingInvitationsDuringCall; // @synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall;
@property(nonatomic) BOOL blockOutgoingInvitationsDuringCall; // @synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall;
@property(nonatomic) BOOL blockMultipleIncomingInvitations; // @synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations;
@property(retain, nonatomic) NSMutableArray *_delegates; // @synthesize _delegates;
// - (void).cxx_destruct;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1;
- (void)_receivedPendingVCRequests;
- (void)_receivedPendingACRequests;
@property(readonly, nonatomic) BOOL _ready;
- (void)requestPendingACInvitations;
- (void)requestPendingVCInvitations;
@property(readonly, nonatomic) BOOL microphoneCapable;
@property(readonly, nonatomic) BOOL cameraCapable;
@property(readonly, nonatomic) BOOL hasRunningConference;
@property(readonly, nonatomic) BOOL hasActiveConference;
@property(readonly, nonatomic) BOOL microphoneConnected;
@property(readonly, nonatomic) BOOL cameraConnected;
- (void)updateActiveConference;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)pushCachedVCCapsToDaemon;
- (void)vcCapabilitiesChanged:(NSUInteger)arg1;
- (void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2;
- (void)_setServiceVCCaps:(NSUInteger)arg1 toCaps:(NSUInteger)arg2;
- (void)_dumpCaps;
@property(nonatomic) id <IMAVControllerDelegate> delegate;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) NSArray *delegates;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 reason:(id)arg5;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (id)init;
- (void)setupIMAVController;
- (BOOL)_shouldRunACConferences;
- (BOOL)_shouldObserveConferences;
- (BOOL)_shouldRunConferences;

@end

