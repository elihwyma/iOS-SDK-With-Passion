/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICUserIdentityProperties.h>

@class ICDelegateToken, NSDate, NSDictionary, NSNumber, NSString;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (nonatomic, getter=isActiveLocker) _Bool activeLocker;
@property (nonatomic, getter=isActive) _Bool active;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (nonatomic, getter=isDelegated) _Bool delegated;
@property (copy, nonatomic) ICDelegateToken *delegateToken;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property (nonatomic, getter=isSandboxed) _Bool sandboxed;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (nonatomic, getter=isSubscriptionStatusEnabled) _Bool subscriptionStatusEnabled;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (copy, nonatomic) NSNumber *privateListeningEnabled;

- (void)setCloudBackupEnabled:(_Bool)arg1;
- (void)setICloudPersonID:(id)arg1;
- (void)setHomeUserIdentifiers:(id)arg1;
- (void)setPrivateListeningEnabledForHomeUsers:(id)arg1;
- (void)replaceValuesWithValuesFromProperties:(id)arg1;

@end
