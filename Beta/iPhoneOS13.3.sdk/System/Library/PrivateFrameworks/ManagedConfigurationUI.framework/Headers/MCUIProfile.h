/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCProfile, NSArray;

@interface MCUIProfile : NSObject

{
    _Bool _showManagedPayloads;
    long long _finalInstallationWarningStyle;
    MCProfile *_profile;
    NSArray *_availableElevatedPayloadInfoTypes;
    NSArray *_accountSections;
    NSArray *_managedAppSections;
    NSArray *_managedBookSections;
    NSArray *_moreDetailsSections;
    NSArray *_restrictionSections;
    NSArray *_payloadInfoSectionSummaries;
}

@property (nonatomic) _Bool showManagedPayloads;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (nonatomic, readonly) MCProfile *profile;
@property (nonatomic, readonly) NSArray *availableElevatedPayloadInfoTypes;
@property (nonatomic, readonly) NSArray *accountSections;
@property (nonatomic, readonly) NSArray *managedAppSections;
@property (nonatomic, readonly) NSArray *managedBookSections;
@property (nonatomic, readonly) NSArray *moreDetailsSections;
@property (nonatomic, readonly) NSArray *restrictionSections;
@property (nonatomic, readonly) NSArray *payloadInfoSectionSummaries;

- (void)dealloc;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (_Bool)isMDMProfile;
- (id)initWithProfile:(id)arg1 managedPayloads:(_Bool)arg2;
- (void)_profileListChanged:(id)arg1;
- (_Bool)managesAppID:(id)arg1;
- (void)setProfile:(id)arg1 managedPayloads:(_Bool)arg2;
- (void)_managedAppsChanged:(id)arg1;
- (void)_managedBooksChanged:(id)arg1;
- (void)reloadProfile:(id)arg1;
- (_Bool)isInstalledMDMProfile;
- (id)_sortedPayloads:(id)arg1;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (long long)_numberOfItemsInSectionsArray:(id)arg1;
- (_Bool)managesBook:(id)arg1;
- (long long)numberOfAccounts;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;

@end
