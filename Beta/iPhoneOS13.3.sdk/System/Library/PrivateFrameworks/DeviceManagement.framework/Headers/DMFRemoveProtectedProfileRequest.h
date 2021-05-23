/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFRemoveProfileRequest.h>

@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

@end
