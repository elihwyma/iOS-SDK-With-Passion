/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSArray, NSData, NSOrderedSet, NSSet, NSString, NSURL, TUSandboxExtendedURL;

@interface TUCallProvider : NSObject <Swift>

{
    _Bool _supportsAudioOnly;
    _Bool _supportsAudioAndVideo;
    _Bool _supportsEmergency;
    _Bool _supportsVoicemail;
    _Bool _supportsRecents;
    _Bool _supportsCurrentPlatform;
    unsigned int _audioSessionID;
    NSString *_identifier;
    NSString *_localizedName;
    NSSet *_supportedHandleTypes;
    NSURL *_bundleURL;
    NSString *_bundleIdentifier;
    NSArray *_emergencyHandles;
    NSArray *_emergencyLabeledHandles;
    NSArray *_handoffIdentifiers;
    NSOrderedSet *_prioritizedSenderIdentities;
    TUSandboxExtendedURL *_sandboxExtendedRingtoneSoundURL;
    NSURL *_originalRingtoneSoundURL;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSSet *supportedHandleTypes;
@property (copy, nonatomic) NSArray *emergencyHandles;
@property (copy, nonatomic) NSArray *emergencyLabeledHandles;
@property (copy, nonatomic) NSArray *handoffIdentifiers;
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities;
@property (retain, nonatomic) NSURL *ringtoneSoundURL;
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL;
@property (retain, nonatomic) NSURL *originalRingtoneSoundURL;
@property (copy, nonatomic) NSData *iconTemplateImageData;
@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic) _Bool supportsAudioOnly;
@property (nonatomic) _Bool supportsAudioAndVideo;
@property (nonatomic) _Bool supportsEmergency;
@property (nonatomic) _Bool supportsVoicemail;
@property (nonatomic) _Bool supportsRecents;
@property (nonatomic) _Bool supportsCurrentPlatform;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic, readonly, getter=isTelephonyProvider) _Bool telephonyProvider;
@property (nonatomic, readonly, getter=isFaceTimeProvider) _Bool faceTimeProvider;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)isSystemProvider;
- (_Bool)isTinCanProvider;
- (_Bool)isEqualToCallProvider:(id)arg1;
- (_Bool)supportsHandleType:(long long)arg1;
- (_Bool)supportsShowingInCallUI;
- (_Bool)prefersShowingInCallUI;
- (_Bool)hasRestrictionsInRetailEnvironment;
- (id)senderIdentityForUUID:(id)arg1;
- (id)senderIdentityForAccountUUID:(id)arg1;
- (id)senderIdentityForHandle:(id)arg1;
- (id)displayAppBundleIdentifier;
- (id)inCallUIBundleIdentifier;
- (void)setSenderIdentities:(id)arg1;
- (id)senderIdentities;

@end
