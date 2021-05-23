/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/STCoreOrganization.h>

@class STLocalOrganizationSettings;

@interface STLocalOrganization : STCoreOrganization

@property (copy, nonatomic) STLocalOrganizationSettings *settings;

+ (id)fetchOrCreateLocalOrganizationWithContext:(id)arg1 error:(id *)arg2;

@end
