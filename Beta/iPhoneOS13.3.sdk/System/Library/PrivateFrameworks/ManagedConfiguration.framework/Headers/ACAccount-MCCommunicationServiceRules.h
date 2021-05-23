/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Accounts/ACAccount.h>

@class NSDictionary, NSNumber, NSString;

@interface ACAccount (MCCommunicationServiceRules)

@property (retain, nonatomic) NSDictionary *communicationServiceRules;
@property (retain, nonatomic) NSString *mcAccountIdentifier;
@property (retain, nonatomic) NSString *mcConfigurationProfileIdentifier;
@property (retain, nonatomic) NSString *mcProfileUUID;
@property (retain, nonatomic) NSString *mcPayloadUUID;
@property (retain, nonatomic) NSNumber *mcEASAccountEnableNotes;
@property (retain, nonatomic) NSNumber *mcEnableMailUserOverridable;
@property (retain, nonatomic) NSNumber *mcEnableContactsUserOverridable;
@property (retain, nonatomic) NSNumber *mcEnableCalendarsUserOverridable;
@property (retain, nonatomic) NSNumber *mcEnableRemindersUserOverridable;
@property (retain, nonatomic) NSNumber *mcEnableNotesUserOverridable;

- (_Bool)MCIsManaged;
- (id)mcBackingProfile;
- (id)mcBackingPayload;
- (_Bool)mc_isUserEnrollmentAccount;
- (void)unenrollAccountWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
