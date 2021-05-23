/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy

+ (unsigned long long)wifiOnlyPeriodInDaysForUpdate:(id)arg1;

- (id)initWithDescriptor:(id)arg1;
- (_Bool)isDownloadAllowableForCellular;

@end
