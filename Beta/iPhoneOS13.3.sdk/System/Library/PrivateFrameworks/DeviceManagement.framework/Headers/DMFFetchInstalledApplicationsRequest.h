/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFFetchApplicationsRequest.h>

@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

@end
