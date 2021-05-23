/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *hardwareType;
@property (retain, nonatomic) NSString *installError;
@property (nonatomic) unsigned long long installStatus;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) long long jobID;

+ (unsigned long long)_installStatusForString:(id)arg1;
+ (unsigned long long)_installTypeForString:(id)arg1;
+ (id)_stringForInstallStatus:(unsigned long long)arg1;
+ (id)_stringForInstallType:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (_Bool)requiresDiagnosticSendingPermission;

@end
