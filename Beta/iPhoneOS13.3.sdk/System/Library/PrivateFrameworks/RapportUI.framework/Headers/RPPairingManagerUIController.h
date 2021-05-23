/*
 Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@protocol OS_dispatch_queue;

@interface RPPairingManagerUIController : NSObject

{
    _Bool _allowManualIP;
    _Bool _runInProcess;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    UIViewController *_presentingViewController;
    NSString *_serviceType;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) _Bool allowManualIP;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) _Bool runInProcess;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;

@end
