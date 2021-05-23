/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, NSXPCConnection, SBSStatusBarStyleOverridesCoordinator;

@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject

{
    NSMapTable *_assertionsByIdentifier;
    NSMutableDictionary *_acquisitionHandlerEntriesByIdentifier;
    NSXPCConnection *_sbXPCConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SBSStatusBarStyleOverridesCoordinator *_internalQueue_styleOverrideCoordinator;
    NSObject<OS_dispatch_queue> *_coordinatorCalloutQueue;
}

@property (retain, nonatomic) NSMapTable *assertionsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier;
@property (retain, nonatomic) NSXPCConnection *sbXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic) SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (void)updateStatusStringForAssertion:(id)arg1;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)statusBarTappedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_reactivateAssertions;
- (void)_registerStyleOverrideCoordinatorAfterInterruption;
- (void)_handleXPCConnectionInvalidation;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(_Bool)arg2;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateRegistrationForCoordinator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unregisterCoordinator;

@end
