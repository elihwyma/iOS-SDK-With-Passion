/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSSerialQueue, NSMutableSet, NSSet, NSString;

@interface FBSServiceFacility : NSObject <Swift>

{
    NSString *_identifier;
    FBSSerialQueue *_queue;
    NSSet *_prerequisiteMilestones;
    NSMutableSet *_clients;
    NSSet *_clients_immutable;
    struct os_unfair_lock_s _clients_immutable_lock;
    _Bool _invalidated;
}

@property (nonatomic, readonly) NSSet *_prerequisiteMilestones;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) FBSSerialQueue *queue;
@property (nonatomic, readonly) NSSet *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (_Bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (_Bool)queue_clientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)queue_clientDidDisconnect:(id)arg1;
- (void)queue_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;

@end
