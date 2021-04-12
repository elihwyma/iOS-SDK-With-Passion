//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFAccessoryVendor-Protocol.h>
#import <HomeUI/HFFavoritable-Protocol.h>
#import <HomeUI/HFHomeKitSettingsVendor-Protocol.h>
#import <HomeUI/HFReorderableHomeKitObject-Protocol.h>
#import <HomeUI/HFRoomContextProviding-Protocol.h>
#import <HomeUI/HFStateDumpBuildable-Protocol.h>
#import <HomeUI/HFSymptomFixableObject-Protocol.h>
#import <HomeUI/HFSymptomsHandlerVendor-Protocol.h>
#import <HomeUI/HFSymptomsVendor-Protocol.h>
#import <HomeUI/HMMediaObject-Protocol.h>

@class ACAccount, HFServiceNameComponents, HMAccessory, HMMediaSession, NAFuture, NSSet, NSString;
@protocol HFMediaValueSource;

@protocol HFMediaProfileContainer <HMMediaObject, HFHomeKitSettingsVendor, HFAccessoryVendor, HFStateDumpBuildable, HFReorderableHomeKitObject, HFFavoritable, HFRoomContextProviding, HFSymptomsVendor, HFSymptomsHandlerVendor, HFSymptomFixableObject>
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, nonatomic) BOOL hf_homePodIsCapableOfShowingSplitAccountError;
@property(readonly, nonatomic) BOOL hf_homePodSupportsMultiUser;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, copy, nonatomic) NSString *hf_categoryLocalizedDescription;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, nonatomic) BOOL hf_showsAudioSettings;
@property(readonly, nonatomic) BOOL hf_supportsMediaSystem;
@property(readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) BOOL hf_isReachable;
@property(readonly, nonatomic) BOOL hf_isAppleMusicReachable;
@property(readonly, nonatomic) BOOL hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property(readonly, nonatomic) NSSet *mediaProfiles;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
- (NSString *)hf_idsDeviceIdentifierWithError:(id )arg1;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
- (NAFuture *)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;
- (NAFuture *)hf_homePodSupportsMultiUserLanguage;
- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
@end

