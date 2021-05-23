/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKExpressPassController, NPKTransitAppletHistoryFetcher, NSString, PKPass, PKPaymentApplication, PKTransitAppletState;

@protocol NPKExpressTransitInterfaceControllerDataSource, NPKExpressTransitInterfaceControllerDelegate, OS_dispatch_source;

@interface NPKExpressTransitInterfaceController : NSObject

{
    id <NPKExpressTransitInterfaceControllerDelegate> _delegate;
    id <NPKExpressTransitInterfaceControllerDataSource> _dataSource;
    NSObject<OS_dispatch_source> *_dismissalTimer;
    NPKTransitAppletHistoryFetcher *_appletHistoryFetcher;
    PKPass *_expressTransitPass;
    PKPaymentApplication *_expressTransitPaymentApplication;
    NPKExpressPassController *_expressPassController;
    PKTransitAppletState *_transactionStartAppletState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dismissalTimer;
@property (retain, nonatomic) NPKTransitAppletHistoryFetcher *appletHistoryFetcher;
@property (retain, nonatomic) PKPass *expressTransitPass;
@property (retain, nonatomic) PKPaymentApplication *expressTransitPaymentApplication;
@property (nonatomic, readonly) NPKExpressPassController *expressPassController;
@property (retain, nonatomic) PKTransitAppletState *transactionStartAppletState;
@property (weak, nonatomic) id <NPKExpressTransitInterfaceControllerDelegate> delegate;
@property (weak, nonatomic) id <NPKExpressTransitInterfaceControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)transitAppletHistoryFetcher:(id)arg1 gotTransitAppletHistory:(id)arg2 forAppletWithAID:(id)arg3;
- (void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3;
- (void)_dismissExpressTransitAlert;
- (void)_updateWithPass:(id)arg1 paymentApplicationIdentifier:(id)arg2;
- (void)_scheduleDismissalOfExpressTransitAlertWithTimeout:(double)arg1;
- (id)_paymentApplicationFromPass:(id)arg1 applicationIdentifier:(id)arg2;
- (_Bool)canHandleExpressEventsFromPass:(id)arg1;

@end
