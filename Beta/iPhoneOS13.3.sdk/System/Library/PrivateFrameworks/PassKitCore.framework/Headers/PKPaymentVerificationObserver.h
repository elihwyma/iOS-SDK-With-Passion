/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPaymentPass, PKVerificationChannel;

@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentVerificationObserverDelegate;

@interface PKPaymentVerificationObserver : NSObject

{
    _Bool _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_identifier;
    PKPaymentPass *_pass;
    PKVerificationChannel *_verificationChannel;
    id <PKPaymentVerificationObserverDelegate> _delegate;
}

@property (retain, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic, readonly) PKPaymentPass *pass;
@property (retain, nonatomic, readonly) PKVerificationChannel *verificationChannel;
@property (nonatomic) id <PKPaymentVerificationObserverDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3;
- (void)startObservingVerificationSourceWithTimeout:(double)arg1;

@end
