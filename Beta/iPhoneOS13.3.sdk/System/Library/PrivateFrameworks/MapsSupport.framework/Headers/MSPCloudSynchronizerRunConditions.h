/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class GEONetworkObserver, NSDate;

@protocol MSPCloudSynchronizerRunConditionsDelegate, OS_dispatch_queue;

@interface MSPCloudSynchronizerRunConditions : NSObject

{
    _Bool _hasiCloudAccount;
    _Bool _isDeviceToDeviceEncryptionReady;
    _Bool _isNetworkReachable;
    id <MSPCloudSynchronizerRunConditionsDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSDate *_lastErrorDate;
    double _lastRetryDelayInSeconds;
    GEONetworkObserver *_networkObserver;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSDate *lastErrorDate;
@property (nonatomic) double lastRetryDelayInSeconds;
@property (retain, nonatomic) GEONetworkObserver *networkObserver;
@property (nonatomic) _Bool hasiCloudAccount;
@property (nonatomic) _Bool isNetworkReachable;
@property (nonatomic) _Bool isDeviceToDeviceEncryptionReady;
@property (weak, nonatomic) id <MSPCloudSynchronizerRunConditionsDelegate> delegate;
@property (nonatomic, readonly) _Bool shouldRun;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (_Bool)shouldRetryAfterError:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)subscribeToNetworkChangeNotifications;
- (void)subscribeToAccountChangeNotifications;
- (void)refreshAccountStatus;
- (void)announceRunConditionsChanged;
- (double)currentRetryDelay;
- (void)networkConditionsChanged;
- (double)delayRetryingAfterError:(id)arg1;

@end
