/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSServiceFacility.h>

@class NSMutableSet, NSObject;

@protocol OS_dispatch_queue;

@interface FBInterfaceOrientationServiceServer : FBSServiceFacility

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_interestedClients;
    long long _interfaceOrientation;
    unsigned long long _sequenceNumber;
}

- (id)init;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)_prerequisiteMilestones;
- (void)_queue_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2;
- (void)_queue_updateInterest:(unsigned int)arg1 forClient:(id)arg2 withMessage:(id)arg3;
- (void)_queue_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;

@end
