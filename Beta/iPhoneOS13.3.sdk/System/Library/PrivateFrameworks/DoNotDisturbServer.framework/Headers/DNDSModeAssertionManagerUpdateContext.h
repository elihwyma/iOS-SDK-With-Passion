/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDSClientDetailsProvider, DNDSModeAssertionStore, DNDSModeAssertionUpdateResult, NSString;

@interface DNDSModeAssertionManagerUpdateContext : NSObject

{
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModeAssertionStore *_store;
    DNDSModeAssertionUpdateResult *_updateResult;
}

@property (copy, nonatomic, readonly) DNDSModeAssertionStore *store;
@property (copy, nonatomic, readonly) DNDSModeAssertionUpdateResult *updateResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_resolveStore:(inout id)arg1;
- (void)_cleanupStore:(inout id)arg1;
- (id)_calculateUpdateResultForStore:(id)arg1 previousStore:(id)arg2;
- (id)takeAssertionWithUUID:(id)arg1 details:(id)arg2 source:(id)arg3 startDate:(id)arg4;
- (id)modeAssertionsMatchingPredicate:(id)arg1;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)arg1;
- (id)takeAssertionWithDetails:(id)arg1 source:(id)arg2 startDate:(id)arg3;
- (id)invalidateAssertionsForRequest:(id)arg1;
- (id)initWithStore:(id)arg1 clientDetailsProvider:(id)arg2;

@end
