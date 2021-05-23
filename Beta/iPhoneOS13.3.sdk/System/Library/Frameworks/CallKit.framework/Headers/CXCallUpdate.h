/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class CXHandle, CXHandoffContext, NSDictionary, NSSet, NSString, NSUUID;

@interface CXCallUpdate : NSObject <Swift>

{
    _Bool _supportsHolding;
    _Bool _supportsGrouping;
    _Bool _supportsUngrouping;
    _Bool _supportsDTMF;
    _Bool _hasVideo;
    _Bool _emergency;
    _Bool _usingBaseband;
    _Bool _blocked;
    _Bool _mayRequireBreakBeforeMake;
    _Bool _supportsTTYWithVoice;
    _Bool _requiresInCallSounds;
    _Bool _prefersExclusiveAccessToCellularNetwork;
    _Bool _remoteUplinkMuted;
    _Bool _shouldSuppressInCallUI;
    _Bool _mutuallyExclusiveCall;
    _Bool _supportsUnambiguousMultiPartyState;
    _Bool _supportsAddCall;
    _Bool _supportsSendingToVoicemail;
    _Bool _requiresAuthentication;
    CXHandle *_remoteHandle;
    NSString *_localizedCallerName;
    struct CXCallUpdateHasSet _hasSet;
    NSUUID *_UUID;
    long long _ttyType;
    long long _inCallSoundRegion;
    NSString *_audioCategory;
    NSString *_audioMode;
    long long _audioInterruptionProvider;
    long long _audioInterruptionOperationMode;
    long long _verificationStatus;
    long long _priority;
    NSString *_crossDeviceIdentifier;
    NSString *_ISOCountryCode;
    NSUUID *_localSenderIdentityUUID;
    NSUUID *_localSenderIdentityAccountUUID;
    NSSet *_remoteParticipantHandles;
    NSSet *_activeRemoteParticipantHandles;
    CXHandoffContext *_handoffContext;
    NSDictionary *_context;
    long long _videoStreamToken;
}

@property (nonatomic) struct CXCallUpdateHasSet hasSet;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic, getter=isEmergency) _Bool emergency;
@property (nonatomic, getter=isUsingBaseband) _Bool usingBaseband;
@property (nonatomic, getter=isBlocked) _Bool blocked;
@property (nonatomic) _Bool mayRequireBreakBeforeMake;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (nonatomic) _Bool supportsTTYWithVoice;
@property (nonatomic) _Bool requiresInCallSounds;
@property (nonatomic) long long inCallSoundRegion;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSString *audioMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *crossDeviceIdentifier;
@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property (copy, nonatomic) NSSet *remoteParticipantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipantHandles;
@property (retain, nonatomic) CXHandoffContext *handoffContext;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) _Bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted;
@property (nonatomic) _Bool shouldSuppressInCallUI;
@property (nonatomic, getter=isMutuallyExclusiveCall) _Bool mutuallyExclusiveCall;
@property (nonatomic) _Bool supportsUnambiguousMultiPartyState;
@property (nonatomic) _Bool supportsAddCall;
@property (nonatomic) _Bool supportsSendingToVoicemail;
@property (nonatomic) long long videoStreamToken;
@property (nonatomic) _Bool requiresAuthentication;
@property (copy, nonatomic) CXHandle *remoteHandle;
@property (copy, nonatomic) NSString *localizedCallerName;
@property (nonatomic) _Bool supportsHolding;
@property (nonatomic) _Bool supportsGrouping;
@property (nonatomic) _Bool supportsUngrouping;
@property (nonatomic) _Bool supportsDTMF;
@property (nonatomic) _Bool hasVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)callUpdateWithDefaultValuesSet;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateWithUpdate:(id)arg1;

@end
