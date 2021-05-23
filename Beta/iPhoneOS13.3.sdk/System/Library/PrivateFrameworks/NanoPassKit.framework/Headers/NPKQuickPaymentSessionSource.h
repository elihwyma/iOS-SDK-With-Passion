/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKPMUButtonListener, NPKQuickPaymentSessionLocalAuthenticationCoordinator, NSDictionary, PKPass;

@protocol NPKQuickPaymentSessionSourceDelegate, OS_dispatch_queue;

@interface NPKQuickPaymentSessionSource : NSObject

{
    id <NPKQuickPaymentSessionSourceDelegate> _delegate;
    NPKPMUButtonListener *_buttonListener;
    NSObject<OS_dispatch_queue> *_sessionSourceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _delegateHandlingButtonEvents;
    _Bool _deferAuthorization;
    unsigned long long _preconditionState;
    PKPass *_initialPass;
    NSDictionary *_vasPasses;
    NPKQuickPaymentSessionLocalAuthenticationCoordinator *_localAuthenticationCoordinator;
}

- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_handlePMUButtonEvent;
- (void)setDeferAuthorization:(_Bool)arg1;
- (void)setVasPasses:(id)arg1;
- (id)initWithDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)setDelegateHandlingButtonEvents:(_Bool)arg1;
- (void)setPreconditionState:(unsigned long long)arg1;
- (void)setInitialPass:(id)arg1;
- (void)setLocalAuthenticationCoordinator:(id)arg1;

@end
