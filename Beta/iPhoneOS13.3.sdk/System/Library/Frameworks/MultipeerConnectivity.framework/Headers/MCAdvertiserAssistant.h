/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class MCAlertController, MCNearbyServiceAdvertiser, MCPeerID, MCSession, NSBundle, NSDictionary, NSMutableArray, NSString;

@protocol MCAdvertiserAssistantDelegate;

@interface MCAdvertiserAssistant : NSObject

{
    id <MCAdvertiserAssistantDelegate> _delegate;
    _Bool _isAdvertising;
    _Bool _wasAdvertising;
    MCSession *_session;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    MCPeerID *_myPeerID;
    MCNearbyServiceAdvertiser *_advertiser;
    NSMutableArray *_invitationsBuffer;
    CDUnknownBlockType _invitationHandlerForPresentedAlert;
    NSString *_appName;
    NSBundle *_frameworkBundle;
    MCAlertController *_alertController;
}

@property (copy, nonatomic) NSDictionary *discoveryInfo;
@property (copy, nonatomic) MCPeerID *myPeerID;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) MCNearbyServiceAdvertiser *advertiser;
@property (retain, nonatomic) NSMutableArray *invitationsBuffer;
@property (copy, nonatomic) CDUnknownBlockType invitationHandlerForPresentedAlert;
@property (copy, nonatomic, readonly) NSString *appName;
@property (nonatomic) _Bool isAdvertising;
@property (nonatomic) _Bool wasAdvertising;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) MCAlertController *alertController;
@property (weak, nonatomic) id <MCAdvertiserAssistantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (void)presentNextInvitation;
- (void)handleUserInvitationDecision:(_Bool)arg1;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;

@end
