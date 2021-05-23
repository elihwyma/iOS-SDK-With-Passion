/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDXPCService.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, PKEntitlementWhitelist;

@protocol OS_dispatch_queue, PDAssertionCoordinatorDelegate;

@interface PDAssertionCoordinator : PDXPCService

{
    NSMutableDictionary *_assertionsByType;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
    PKEntitlementWhitelist *_whitelist;
    long long _suppressionPermissionState;
    NSMutableArray *_pendingAssertionRequests;
    _Bool _isForegroundApplication;
    id <PDAssertionCoordinatorDelegate> _delegate;
    NSString *_bundleIdentifier;
}

@property (weak, nonatomic) id <PDAssertionCoordinatorDelegate> delegate;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool isForegroundApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)suppressionApplicationRegistry;

- (id)initWithConnection:(id)arg1;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(_Bool)arg3;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(CDUnknownBlockType)arg3;
- (id)assertionsOfType:(unsigned long long)arg1;
- (void)invalidateAllAssertions;
- (void)cancelPendingAssertionRequests;
- (void)invalidateAssertionsForBackgroundApplicationState;
- (void)processPendingAssertionRequests;
- (void)assertionRequestDidTimeout:(id)arg1;
- (void)_addRequestForAssertion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_processPendingAssertionRequests;
- (void)_showAlertForContactlessInterfaceSuppression;
- (void)_acquireAssertion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_cancelPendingAssertionRequest:(id)arg1;

@end
