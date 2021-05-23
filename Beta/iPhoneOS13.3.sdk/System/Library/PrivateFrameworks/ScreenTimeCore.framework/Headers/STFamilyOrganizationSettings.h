/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class NSData, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings

@property (nonatomic) _Bool isDirty;
@property (nonatomic) _Bool isManaged;
@property (nonatomic) _Bool shareWebUsage;
@property (copy, nonatomic) NSData *versionVector;
@property (retain, nonatomic) STFamilyOrganization *organization;

- (id)description;
- (id)redactedDescription;
- (void)didChangeValueForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setPasscode:(id)arg1;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

@end
