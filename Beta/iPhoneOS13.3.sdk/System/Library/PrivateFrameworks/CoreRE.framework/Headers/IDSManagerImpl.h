/*
 Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

__attribute__((visibility("hidden")))
@interface IDSManagerImpl : NSObject

{
    Event_b92446be m_receivedInvite;
    Event_8f7d30d6 m_acceptedInvite;
    Event_8f7d30d6 m_rejectedInvite;
    struct DynamicArray<re::IDSInvite *> m_invites;
    struct DynamicArray<re::IDSDiscoveryView *> m_views;
    _Bool _isListeningForInvites;
    IDSService *_service;
    struct Config _config;
}

@property (nonatomic) struct Config config;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic) _Bool isListeningForInvites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)initWithConfig:(struct Config)arg1;
- (_Bool)isLoggedIn;
- (void)setupService;
- (_Bool)isValidDestinationsArray:(id)arg1;
- (id)discoveryViewToNSArray:(struct DiscoveryView *)arg1 to:(id)arg2;
- (void)sendMessage:(id)arg1 type:(id)arg2 objectGUID:(id)arg3 to:(id)arg4;
- (struct IDSSessionService *)idsSessionService;
- (void)broadcastViewUpdate:(struct IDSDiscoveryView *)arg1;
- (_Bool)isValidInviteResponse:(id)arg1 message:(id)arg2;
- (void)inviteAcceptedFrom:(struct IDSInvite *)arg1 from:(id)arg2;
- (SharedPtr_601ce9e9)createLocalIdentity;
- (_Bool)isValidViewUpdate:(id)arg1 message:(id)arg2;
- (SharedPtr_24b37889)createDiscoveryViewWithDestinations:(id)arg1 destinations:(id)arg2;
- (void)sendInviteRequest:(struct IDSInvite *)arg1 destinations:(id)arg2;
- (_Bool)parseMessage:(id)arg1 payload:(id *)arg2 objectGUID:(id *)arg3 type:(id *)arg4;
- (struct IDSInvite *)inviteWithGuid:(id)arg1;
- (struct IDSDiscoveryView *)discoveryViewWithGuid:(id)arg1;
- (void)incomingInviteMessage:(struct IDSInvite *)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (void)incomingViewMessage:(struct IDSDiscoveryView *)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (void)incomingInviteRequest:(id)arg1 payload:(id)arg2 from:(id)arg3;
- (Event_b92446be *)receivedInviteEvent;
- (Event_8f7d30d6 *)acceptedInviteEvent;
- (Event_8f7d30d6 *)rejectedInviteEvent;
- (void)startListeningForInvites;
- (void)stopListeningForInvites;
- (void)acceptInvite:(struct IDSInvite *)arg1;
- (void)willDestroyInvite:(struct IDSInvite *)arg1;
- (void)willDestroyDiscoveryView:(struct IDSDiscoveryView *)arg1;
- (SharedPtr_d68dfbcb)createInviteWithDestinations:(Slice_554aef03)arg1;
- (SharedPtr_d68dfbcb)createInviteWithDiscoveryView:(SharedPtr_c2d37bbb)arg1 destinations:(Slice_554aef03)arg2;

@end
