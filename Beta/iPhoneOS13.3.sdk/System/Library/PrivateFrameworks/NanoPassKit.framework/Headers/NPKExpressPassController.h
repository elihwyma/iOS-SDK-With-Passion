/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSDistributedNotificationCenter, NSSet, NSString, PKExpressPassInformation, PKFieldDetector, PKPass, PKPassLibrary, PKPaymentService;

@protocol NPKExpressPassControllerDelegate, OS_dispatch_queue;

@interface NPKExpressPassController : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _expressPassChangedNotifyToken;
    unsigned long long _transactionStatus;
    PKPass *_currentTransactionPass;
    NSSet *_expressPassesInformation;
    PKPaymentService *_queue_paymentService;
    PKPassLibrary *_passLibrary;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
    id <NPKExpressPassControllerDelegate> _delegate;
    NSDictionary *_expressPasses;
    PKExpressPassInformation *_currentTransactionExpressPassInformation;
    PKFieldDetector *_fieldDetector;
}

@property (retain, nonatomic) PKPass *currentTransactionPass;
@property (weak, nonatomic, readonly) PKPassLibrary *passLibrary;
@property (retain) NSSet *expressPassesInformation;
@property (retain) NSDictionary *expressPasses;
@property (weak, nonatomic, readonly) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain, nonatomic) PKExpressPassInformation *currentTransactionExpressPassInformation;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (weak) id <NPKExpressPassControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)initWithDelegate:(id)arg1;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)_queue_updateExpressPasses;
- (void)updateExpressPasses;
- (id)initWithPaymentService:(id)arg1 passLibrary:(id)arg2 distributedNotificationCenter:(id)arg3 delegate:(id)arg4;
- (void)_transitionToStatus:(unsigned long long)arg1 forExpressPass:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (void)_handleEnterNearFieldNotification:(id)arg1;
- (void)_handleExpressTransactionStartNotification:(id)arg1;
- (void)_handleExpressTransactionTimeOutNotification:(id)arg1;
- (void)_handleExpressTransactionEndNotification:(id)arg1;
- (void)_handleExpressTransactionFailedNotification:(id)arg1;
- (void)_handleExitNearFieldNotification:(id)arg1;
- (void)_handlePassesLibraryChangedNotification:(id)arg1;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (_Bool)_hasNoTransactionStartOrEndNotificationForTechnologyType:(long long)arg1;
- (void)_onqueue_transactionStartedWithApplicationIdentifier:(id)arg1;
- (void)_onqueue_transactionEndedWithApplicationIdentifier:(id)arg1;
- (void)_onqueue_transactionFailedWithApplicationIdentifier:(id)arg1;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg1;
- (id)_queue_paymentService;
- (void)_startListeningForExpressNotifications;
- (void)_stopListeningForExpressNotifications;
- (void)_startFieldDetector;
- (void)_stopFieldDetector;
- (id)_expressPassesInformationWithTCIs:(id)arg1;

@end
