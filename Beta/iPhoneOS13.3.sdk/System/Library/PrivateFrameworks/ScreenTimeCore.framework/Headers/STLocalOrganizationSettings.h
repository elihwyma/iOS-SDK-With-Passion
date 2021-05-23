/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class NSString, STLocalOrganization;

__attribute__((visibility("hidden")))
@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (id)dictionaryRepresentation;
- (void)setPasscode:(id)arg1;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

@end
