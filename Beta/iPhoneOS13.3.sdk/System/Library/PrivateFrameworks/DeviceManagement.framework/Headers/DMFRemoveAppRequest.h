/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFAppRequest.h>

@interface DMFRemoveAppRequest : DMFAppRequest

+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

@end
