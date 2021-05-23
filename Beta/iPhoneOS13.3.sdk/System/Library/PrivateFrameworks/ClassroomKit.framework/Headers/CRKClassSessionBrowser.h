/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATNetworkReachability, CRKClassSessionBeaconBrowser, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@protocol CRKClassSessionBrowserDelegate, CRKInvitationSessionBrowserDelegate;

@interface CRKClassSessionBrowser : NSObject

{
    NSMutableDictionary *mClassSessionsByIdentifier;
    NSMutableArray *mInRangeClassSessions;
    NSMutableDictionary *mInvitationSessionsByEndpoint;
    CRKClassSessionBeaconBrowser *mBeaconBrowser;
    CATNetworkReachability *mNetworkReachability;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountBySessionIdentifier;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountByInviteSessionEndpoint;
    NSMapTable *mWhitelistedEndpointsBySessionClass;
    _Bool _allowInvitationSessions;
    _Bool _allowUnenrolledSessions;
    id <CRKClassSessionBrowserDelegate> _delegate;
    id <CRKInvitationSessionBrowserDelegate> _invitationSessionDelegate;
    NSSet *_organizationUUIDs;
    NSSet *_enrolledControlGroupIdentifiers;
}

@property (weak, nonatomic) id <CRKClassSessionBrowserDelegate> delegate;
@property (weak, nonatomic) id <CRKInvitationSessionBrowserDelegate> invitationSessionDelegate;
@property (copy, nonatomic) NSSet *organizationUUIDs;
@property (copy, nonatomic) NSSet *enrolledControlGroupIdentifiers;
@property (nonatomic) _Bool allowInvitationSessions;
@property (nonatomic) _Bool allowUnenrolledSessions;
@property (nonatomic, readonly, getter=isBrowsing) _Bool browsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reachabilityDidChange:(id)arg1;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)sessionDidDisconnect:(id)arg1;
- (void)delegateDidFailWithError:(id)arg1;
- (void)sessionDidInvalidate:(id)arg1;
- (id)clientIdentityForSession:(id)arg1;
- (id)trustedAnchorCertificatesForSession:(id)arg1;
- (void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidLoseBeacon:(id)arg1;
- (void)sessionDidBecomeConnectable:(id)arg1;
- (void)sessionDidBecomeNotConnectable:(id)arg1;
- (void)session:(id)arg1 didConnectWithTransport:(id)arg2;
- (void)beaconBrowser:(id)arg1 didFindBeaconForClassSession:(id)arg2 flags:(unsigned short)arg3;
- (void)beaconBrowser:(id)arg1 didFindBeaconForInvitationSessionWithEndpoint:(id)arg2;
- (void)beaconBrowser:(id)arg1 didFailWithError:(id)arg2;
- (void)updateConnectedSessions;
- (void)updateRequiresBeaconFlagForSession:(id)arg1;
- (id)delegateNeedsClientIdentityForGroup:(id)arg1;
- (id)delegateNeedsClientIdentityForInvitationSessionWithEndpoint:(id)arg1;
- (id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)arg1;
- (void)delegateClassSessionDidBecomeConnectable:(id)arg1;
- (void)delegateClassSessionDidBecomeNotConnectable:(id)arg1;
- (_Bool)isEndpointWhitelisted:(id)arg1 forSessionClass:(Class)arg2;
- (void)whitelistEndpointAndInvalidateNonWhitelistedSessionsOnSameHost:(id)arg1 forSessionClass:(Class)arg2;
- (void)delegateDidFindClassSession:(id)arg1 transport:(id)arg2;
- (void)delegateDidFindInvitationSession:(id)arg1 transport:(id)arg2;
- (void)delegateLostConnectionToClassSession:(id)arg1;
- (void)delegateLostConnectionToInvitationSession:(id)arg1;
- (void)delegateDidRemoveClassSession:(id)arg1;
- (void)dewhitelistEndpoint:(id)arg1 forSessionClass:(Class)arg2;
- (void)removeInRangeClassSession:(id)arg1;
- (void)delegateDidRemoveInvitationSession:(id)arg1;
- (void)addInRangeClassSession:(id)arg1;
- (void)assertPort:(unsigned short)arg1 canBeWhitelistedForHost:(id)arg2 sessionClass:(Class)arg3;
- (id)sessionsForClass:(Class)arg1;
- (void)delegateInRangeClassSessionsDidChange;
- (void)connectToClassSessionWithIdentifier:(id)arg1;
- (void)classSessionInvalidated:(id)arg1;
- (void)classSessionRejected:(id)arg1;
- (void)lostConnectionToClassSession:(id)arg1;
- (_Bool)hasConnectionToClassWithIdentifier:(id)arg1;
- (void)invitationSessionWithEndpointInvalidated:(id)arg1;
- (void)lostConnectionToInvitationSessionWithEndpoint:(id)arg1;
- (void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)arg1;
- (id)stateDictionariesByClassSessionIdentifierString;
- (id)browserStateDictionary;

@end
