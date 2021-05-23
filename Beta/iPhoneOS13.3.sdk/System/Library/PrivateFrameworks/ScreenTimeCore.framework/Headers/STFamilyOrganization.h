/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/STCoreOrganization.h>

@class NSSet;

@interface STFamilyOrganization : STCoreOrganization

@property (retain, nonatomic) NSSet *settings;

+ (id)fetchOrCreateFamilyOrganizationWithContext:(id)arg1 error:(id *)arg2;

@end
