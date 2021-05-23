/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDServerConfiguration : NSObject

{
    NSDate *_expiry;
    NSMutableDictionary *_values;
    NSMutableDictionary *_allowedAppVersionsCache;
}

@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache;
@property (retain, nonatomic) NSDate *expiry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithValues:(id)arg1;
- (_Bool)isExpired;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)flowControlBudgetForContainer:(id)arg1;
- (id)flowControlRegenerationForContainer:(id)arg1;
- (id)flowControlMaximumThrottleTime:(id)arg1;
- (double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1;
- (_Bool)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3;
- (unsigned long long)maxBatchSizeForContainer:(id)arg1;
- (_Bool)allowExpiredDNSBehavior:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1;
- (long long)tokenRegisterDaysForContainer:(id)arg1;
- (id)transcodeServerPublicKeyURLsForContainer:(id)arg1;
- (id)iCloudHostnames;
- (id)valueForKeyPath:(id)arg1 forContainer:(id)arg2;

@end
