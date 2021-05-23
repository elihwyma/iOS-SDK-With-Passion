/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

#import <CarPlaySupport/Swift-Protocol.h>

@class BSServiceConnection, NSString;

@protocol CPBannerDelegate, OS_dispatch_queue;

@interface CPSBannerSourceProxy : NSObject <Swift>

{
    id <CPBannerDelegate> _delegate;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (weak, nonatomic) id <CPBannerDelegate> delegate;
@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)setBundleIdentifier:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)postBannerForNavigationAlert:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(_Bool)arg2;

@end
