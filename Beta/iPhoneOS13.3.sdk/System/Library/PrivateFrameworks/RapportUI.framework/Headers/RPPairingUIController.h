/*
 Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol OS_dispatch_queue;

@interface RPPairingUIController : NSObject

{
    UIViewController *_presentingViewController;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _retryHandler;
    CDUnknownBlockType _tryPINHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType retryHandler;
@property (copy, nonatomic) CDUnknownBlockType tryPINHandler;

- (id)init;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)pairingError:(id)arg1;
- (void)promptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;

@end
