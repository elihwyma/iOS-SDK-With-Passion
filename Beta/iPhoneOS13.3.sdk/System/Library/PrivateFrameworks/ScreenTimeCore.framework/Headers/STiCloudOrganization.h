/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/STCoreOrganization.h>

@class STiCloudOrganizationSettings;

@interface STiCloudOrganization : STCoreOrganization

@property (copy, nonatomic) STiCloudOrganizationSettings *settings;

+ (id)fetchOrCreateiCloudOrganizationWithContext:(id)arg1 error:(id *)arg2;

@end
