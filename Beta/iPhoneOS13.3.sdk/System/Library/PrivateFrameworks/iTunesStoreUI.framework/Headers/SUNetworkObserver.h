/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISStoreURLOperation, NSNumber, NSString, NSTimer;

@interface SUNetworkObserver : NSObject

{
    ISStoreURLOperation *_partnerDetectOperation;
    _Bool _partnersEnabled;
    NSString *_partnerIdentifier;
    NSTimer *_startupTimer;
    long long _storeServicesNetworkUsageCount;
}

@property (retain, nonatomic) NSString *partnerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_networkTypeChanged:(id)arg1;
- (void)_partnerHeaderChanged:(id)arg1;
- (void)_storeServicesNetworkStartNotification:(id)arg1;
- (void)_storeServicesNetworkStopNotification:(id)arg1;
- (void)_networkUsageStateChanged:(id)arg1;
- (void)_cancelStartupTimer;
- (void)_startupTimer:(id)arg1;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_updateNetworkActivityIndicator;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)checkPartnerAvailability;
- (void)setPartnersEnabled:(_Bool)arg1;
- (void)startNetworkAvailabilityTimer;

@end
