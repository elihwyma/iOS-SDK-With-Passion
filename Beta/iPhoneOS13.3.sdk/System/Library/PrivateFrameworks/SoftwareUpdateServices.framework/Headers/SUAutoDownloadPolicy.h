/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy

- (id)initWithDescriptor:(id)arg1;
- (_Bool)isDownloadAllowableForCellular;
- (_Bool)isPowerRequired;
- (unsigned long long)wifiOnlyPeriodInDays;
- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1;

@end
