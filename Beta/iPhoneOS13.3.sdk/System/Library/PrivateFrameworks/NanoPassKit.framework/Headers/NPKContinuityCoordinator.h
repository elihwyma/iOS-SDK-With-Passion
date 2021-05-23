/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSUserActivity;

@protocol OS_dispatch_queue;

@interface NPKContinuityCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserActivity *_provisionPassUserActivity;
    NSUserActivity *_getPaymentPassesUserActivity;
    NSUserActivity *_passListUserActivity;
    NSUserActivity *_individualPassUserActivity;
    NSUserActivity *_setUpPeerPaymentUserActivity;
    NSUserActivity *_viewPeerPaymentUserActivity;
    NSUserActivity *_currentUserActivity;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserActivity *provisionPassUserActivity;
@property (retain, nonatomic) NSUserActivity *getPaymentPassesUserActivity;
@property (retain, nonatomic) NSUserActivity *passListUserActivity;
@property (retain, nonatomic) NSUserActivity *individualPassUserActivity;
@property (retain, nonatomic) NSUserActivity *setUpPeerPaymentUserActivity;
@property (retain, nonatomic) NSUserActivity *viewPeerPaymentUserActivity;
@property (weak, nonatomic) NSUserActivity *currentUserActivity;

+ (id)sharedContinuityCoordinator;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (void)userViewingPassList;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(_Bool)arg2;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToSetUpPeerPayment;
- (void)userNeedsToViewPeerPaymentForHandle:(id)arg1;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)invalidateAllActivities;

@end
