/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFFetchCertificatesRequest.h>

@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

@end
