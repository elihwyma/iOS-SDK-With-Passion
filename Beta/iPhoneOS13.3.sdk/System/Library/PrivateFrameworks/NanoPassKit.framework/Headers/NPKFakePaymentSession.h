/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKQuickPaymentSession.h>

@class NSDictionary, NSObject, NSString, PKFieldDetector, PKPass;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKFakePaymentSession : NPKQuickPaymentSession

{
    _Bool _ourConfirmed;
    _Bool _ourInServiceMode;
    _Bool _invalidated;
    PKPass *_ourCurrentPass;
    NSDictionary *_ourVasPasses;
    NSObject<OS_dispatch_queue> *_ourCallbackQueue;
    NSObject<OS_dispatch_queue> *_ourInternalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    PKFieldDetector *_fieldDetector;
    unsigned long long _changeCardToken;
}

@property (retain, nonatomic) PKPass *ourCurrentPass;
@property (retain, nonatomic) NSDictionary *ourVasPasses;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ourInternalQueue;
@property (nonatomic) _Bool ourConfirmed;
@property (nonatomic) _Bool ourInServiceMode;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) PKFieldDetector *fieldDetector;
@property (nonatomic) _Bool invalidated;
@property (nonatomic) unsigned long long changeCardToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)setCredential:(id)arg1;
- (_Bool)startSession;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (id)vasPasses;
- (void)setDeferAuthorization:(_Bool)arg1;
- (void)setCurrentPass:(id)arg1;
- (void)setVasPasses:(id)arg1;
- (void)_handleTimeoutTimer;
- (void)_setTimeoutTimer;
- (void)_handleTransactionCompleteDarwinNotification;
- (void)_scheduleDidActivateEventForPass:(id)arg1;
- (id)currentPass;
- (_Bool)deferAuthorization;
- (void)setInServiceMode:(_Bool)arg1;
- (_Bool)inServiceMode;
- (void)confirmOrRenewSession;
- (void)renewSession;
- (void)deactivateSessionWithCompletion:(CDUnknownBlockType)arg1;

@end
