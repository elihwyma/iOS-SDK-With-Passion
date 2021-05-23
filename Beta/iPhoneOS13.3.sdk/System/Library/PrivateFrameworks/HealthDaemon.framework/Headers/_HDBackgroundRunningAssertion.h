/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class BKSProcessAssertion, CLInUseAssertion, HDHealthStoreClient;

@interface _HDBackgroundRunningAssertion : HDAssertion

{
    _Bool _shouldAcquireCLAssertion;
    HDHealthStoreClient *_client;
    BKSProcessAssertion *_bksAssertion;
    CLInUseAssertion *_coreLocationAssertion;
}

@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic, readonly) _Bool shouldAcquireCLAssertion;
@property (retain, nonatomic) BKSProcessAssertion *bksAssertion;
@property (retain, nonatomic) CLInUseAssertion *coreLocationAssertion;

- (id)initWithOwnerIdentifier:(id)arg1 client:(id)arg2 shouldAcquireCLAssertion:(_Bool)arg3;

@end
