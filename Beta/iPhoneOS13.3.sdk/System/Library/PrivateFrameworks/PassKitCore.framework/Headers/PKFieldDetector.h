/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NFFieldDetectSession, NFLoyaltyAndPaymentSession, NSHashTable, NSString, PKFieldProperties;

@protocol NFSession, OS_dispatch_queue, OS_dispatch_source, PKFieldDetectorDelegate;

@interface PKFieldDetector : NSObject

{
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    _Bool _fieldDetectSessionRequested;
    _Bool _fieldPresent;
    PKFieldProperties *_fieldPropertiesToLookup;
    NFLoyaltyAndPaymentSession *_fieldPropertiesLookupSession;
    NSObject<NFSession> *_fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> *_fieldPropertiesLookupTimer;
    unsigned long long _fieldPropertieslookupSynchronizer;
    struct os_unfair_lock_s _lock;
    NSHashTable *_observers;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <PKFieldDetectorDelegate> _delegate;
}

@property (weak, nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) id <PKFieldDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_endLookupAndNotifyForFieldProperties:(id)arg1;
- (void)_startLookupForFieldProperties:(id)arg1;
- (void)_endFieldPropertiesLookup;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)_startFieldDetectSession;
- (void)_restartFieldDetectSession;
- (void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)fieldDetectSessionDidExitField:(id)arg1;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
- (void)setPersistentFieldDetectionEnabled:(_Bool)arg1;

@end
