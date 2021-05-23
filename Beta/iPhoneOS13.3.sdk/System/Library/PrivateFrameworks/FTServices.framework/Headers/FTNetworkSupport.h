/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject

{
    Class _APSConnectionClass;
    APSConnection *_apsConnection;
    NSTimer *_reliabilityAttemptTimer;
    _Bool _enableCriticalReliability;
    _Bool _criticalReliabilityEnabledState;
}

@property (nonatomic, readonly) _Bool allowAnyNetwork;
@property (nonatomic, readonly) _Bool validNetworkEnabled;
@property (nonatomic, readonly) _Bool validNetworkActive;
@property (nonatomic, readonly) _Bool validNetworkReachable;
@property (nonatomic, readonly) _Bool wiFiActiveAndReachable;
@property (nonatomic, readonly) _Bool willSearchForNetwork;
@property (nonatomic, readonly) _Bool dataActiveAndReachable;
@property (nonatomic, readonly) _Bool networkEnabled;
@property (nonatomic, readonly) _Bool networkActive;
@property (nonatomic, readonly) _Bool networkReachable;
@property (nonatomic) _Bool enableCriticalReliability;

+ (id)sharedInstance;

- (_Bool)validNetworkEnabledForBundleId:(id)arg1;
- (_Bool)validNetworkActiveForBundleId:(id)arg1;
- (_Bool)validNetworkReachableForBundleId:(id)arg1;
- (_Bool)willSearchForNetworkForBundleId:(id)arg1;
- (void)_clearReliabilityTimeoutInterval;
- (void)_tryToEnableReliability;
- (void)_createAPSConnectionIfNeeded;
- (void)_reallySetCriticalReliability:(_Bool)arg1;
- (void)_setReliabilityTimeoutInterval;

@end
