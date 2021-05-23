/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HFServiceNameComponents, HMAccessory, HMMediaSession, NSSet, NSString;

@protocol HFMediaValueSource;

@protocol HFMediaProfileContainer <Swift>

@property (copy, nonatomic, readonly) HMMediaSession *mediaSession;
@property (nonatomic, readonly) NSSet *mediaProfiles;
@property (nonatomic, readonly) _Bool hf_isCurrentAccessory;
@property (nonatomic, readonly) _Bool hf_isAccessorySettingsReachable;
@property (nonatomic, readonly) _Bool hf_isAppleMusicReachable;
@property (nonatomic, readonly) _Bool hf_isReachable;
@property (nonatomic, readonly) _Bool hf_supportsSoftwareUpdate;
@property (nonatomic, readonly) _Bool hf_supportsMediaSystem;
@property (nonatomic, readonly) _Bool hf_showsAudioSettings;
@property (nonatomic, readonly) NSString *hf_prettyDescription;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (copy, nonatomic, readonly) NSString *hf_categoryLocalizedDescription;
@property (nonatomic, readonly) HMAccessory *hf_backingAccessory;
@property (nonatomic, readonly) _Bool hf_homePodSupportsMultiUser;
@property (nonatomic, readonly) _Bool hf_homePodIsCapableOfShowingSplitAccountError;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (nonatomic, readonly) id <HFMediaValueSource> hf_mediaValueSource;
@property (copy, nonatomic, readonly) NSSet *hf_deviceIdentifiers;
@property (copy, nonatomic, readonly) NSString *hf_mediaRouteIdentifier;

- (unsigned short)hf_appleMusicCurrentLoggedInAccount;
- (unsigned short)hf_appleMusicCurrentLoggedInAccountDSID;
- (unsigned short)hf_homePodSupportsMultiUserLanguage;
- (unsigned short)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (unsigned short)hf_fetchLogListWithTimeout: /* Error: Ran out of types for this method. */;
- (unsigned short)hf_fetchLog:timeout: /* Error: Ran out of types for this method. */;
- (unsigned short)hf_idsDeviceIdentifierWithError: /* Error: Ran out of types for this method. */;

@end
