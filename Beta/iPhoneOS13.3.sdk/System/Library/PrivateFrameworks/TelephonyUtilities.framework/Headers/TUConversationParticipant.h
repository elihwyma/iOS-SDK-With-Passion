/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, TUHandle;

@interface TUConversationParticipant : NSObject <Swift>

{
    _Bool _muted;
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _momentsAvailable;
    unsigned long long _identifier;
    TUHandle *_handle;
    long long _streamToken;
    long long _audioPriority;
    long long _videoPriority;
    NSString *_avcIdentifier;
    NSString *_activeIDSDestination;
}

@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (nonatomic, readonly) unsigned long long identifier;
@property (copy, nonatomic, readonly) TUHandle *handle;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToParticipant:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2;

@end
