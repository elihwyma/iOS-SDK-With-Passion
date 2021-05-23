/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICDelegateToken, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ICUserIdentityProperties : NSObject <Swift>

{
    NSString *_alternateDSID;
    NSString *_carrierBundleDeviceIdentifier;
    _Bool _cloudBackupEnabled;
    _Bool _delegated;
    ICDelegateToken *_delegateToken;
    NSNumber *_dsid;
    NSString *_firstName;
    NSString *_iCloudPersonID;
    NSString *_lastName;
    _Bool _managedAppleID;
    _Bool _sandboxed;
    NSString *_storefrontIdentifier;
    _Bool _subscriptionStatusEnabled;
    NSString *_username;
    NSDate *_ageVerificationExpirationDate;
    NSNumber *_mergeToCloudLibraryPreference;
    NSArray *_homeUserIdentifiers;
    NSDictionary *_cloudLibraryStateReason;
    NSNumber *_privateListeningEnabled;
    _Bool _activeLocker;
    _Bool _active;
    NSDictionary *_privateListeningEnabledForHomeUsers;
}

@property (nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled;
@property (copy, nonatomic, setter=setICloudPersonID:) NSString *iCloudPersonID;
@property (copy, nonatomic) NSArray *homeUserIdentifiers;
@property (copy, nonatomic) NSDictionary *privateListeningEnabledForHomeUsers;
@property (copy, nonatomic, readonly) NSString *alternateDSID;
@property (copy, nonatomic, readonly) NSString *carrierBundleDeviceIdentifier;
@property (copy, nonatomic, readonly) NSNumber *DSID;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly, getter=isManagedAppleID) _Bool managedAppleID;
@property (nonatomic, readonly, getter=isSandboxed) _Bool sandboxed;
@property (copy, nonatomic, readonly) NSString *storefrontIdentifier;
@property (nonatomic, readonly, getter=isSubscriptionStatusEnabled) _Bool subscriptionStatusEnabled;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSDate *ageVerificationExpirationDate;
@property (copy, nonatomic, readonly) NSNumber *mergeToCloudLibraryPreference;
@property (copy, nonatomic, readonly) NSDictionary *cloudLibraryStateReason;
@property (copy, nonatomic, readonly) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly, getter=isActiveLocker) _Bool activeLocker;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isDelegated) _Bool delegated;
@property (copy, nonatomic, readonly) ICDelegateToken *delegateToken;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
