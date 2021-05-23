/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class NSArray, NSData, NSOrderedSet, NSSet, NSString, NSURL;

@interface CXProviderConfiguration : NSObject <Swift>

{
    _Bool _includesCallsInRecents;
    _Bool _supportsVideo;
    _Bool _supportsAudioOnly;
    _Bool _supportsEmergency;
    _Bool _supportsVoicemail;
    _Bool _supportsCurrentPlatform;
    unsigned int _audioSessionID;
    NSString *_localizedName;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
    NSSet *_supportedHandleTypes;
    NSArray *_emergencyHandles;
    NSArray *_emergencyLabeledHandles;
    NSArray *_handoffIdentifiers;
    NSOrderedSet *_prioritizedSenderIdentities;
    NSURL *_ringtoneSoundURL;
}

@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) unsigned int audioSessionID;
@property (copy, nonatomic) NSArray *emergencyHandles;
@property (copy, nonatomic) NSArray *emergencyLabeledHandles;
@property (copy, nonatomic) NSArray *handoffIdentifiers;
@property (copy, nonatomic) NSSet *senderIdentities;
@property (copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities;
@property (copy, nonatomic) NSURL *ringtoneSoundURL;
@property (nonatomic) _Bool supportsAudioOnly;
@property (nonatomic) _Bool supportsEmergency;
@property (nonatomic) _Bool supportsVoicemail;
@property (nonatomic) _Bool supportsCurrentPlatform;
@property (retain, nonatomic) NSString *ringtoneSound;
@property (copy, nonatomic) NSData *iconTemplateImageData;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic) _Bool includesCallsInRecents;
@property (nonatomic) _Bool supportsVideo;
@property (copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (id)initWithLocalizedName:(id)arg1;

@end
