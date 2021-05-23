/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class NSString, STiCloudOrganization;

__attribute__((visibility("hidden")))
@interface STiCloudOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STiCloudOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (id)dictionaryRepresentation;
- (void)setPasscode:(id)arg1;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

@end
