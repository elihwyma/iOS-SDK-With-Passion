/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AAProvisioningResponse : AAAuthenticationResponse

{
    NSDictionary *_icloud;
}

@property (nonatomic, readonly) NSArray *provisionedDataclasses;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSArray *appleIDAliases;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSNumber *primaryEmailVerified;
@property (nonatomic, readonly) NSString *iCloudAuthToken;
@property (nonatomic, readonly) NSString *fmipAuthToken;
@property (nonatomic, readonly) NSString *fmipSiriToken;
@property (nonatomic, readonly) NSString *searchPartyToken;
@property (nonatomic, readonly) NSString *keyTransparencyToken;
@property (nonatomic, readonly) NSString *fmipAppToken;
@property (nonatomic, readonly) NSDictionary *regionInfo;
@property (nonatomic, readonly, getter=isManagedAppleID) _Bool managedAppleID;
@property (nonatomic, readonly, getter=isNotesMigrated) _Bool notesMigrated;
@property (nonatomic, readonly, getter=isRemindersMigrated) _Bool remindersMigrated;
@property (nonatomic, readonly, getter=isSandboxAccount) _Bool sandboxAccount;
@property (nonatomic, readonly, getter=isCloudDocsMigrated) _Bool cloudDocsMigrated;
@property (nonatomic, readonly, getter=hasOptionalTerms) _Bool optionalTerms;
@property (nonatomic, readonly, getter=isFamilyEligible) _Bool familyEligible;

- (id)initWithDictionary:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
