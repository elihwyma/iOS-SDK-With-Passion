/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

#import <AVConference/Swift-Protocol.h>

@interface VCCapabilities : NSObject <Swift>

{
    _Bool isAudioEnabled;
    _Bool isAudioPausedToStart;
    _Bool isVideoEnabled;
    _Bool isVideoPausedToStart;
    _Bool isVideoSourceScreen;
    _Bool isDuplexAudioOnly;
    _Bool isDuplexVideoOnly;
    _Bool isHalfDuplexAudio;
    _Bool isKeyExchangeEnabled;
    _Bool isRelayEnabled;
    _Bool isRelayForced;
    _Bool requiresWifi;
    _Bool isDTLSEnabled;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
    int deviceRole;
}

@property _Bool isAudioEnabled;
@property _Bool isAudioPausedToStart;
@property _Bool isVideoEnabled;
@property _Bool isVideoPausedToStart;
@property _Bool isVideoSourceScreen;
@property _Bool isDuplexVideoOnly;
@property _Bool isDuplexAudioOnly;
@property _Bool isHalfDuplexAudio;
@property _Bool isKeyExchangeEnabled;
@property _Bool isRelayEnabled;
@property _Bool isRelayForced;
@property _Bool requiresWifi;
@property _Bool isDTLSEnabled;
@property unsigned int preferredAudioCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;

+ (id)DataOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;
+ (id)screenSharingVCCapabilities;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)newEncodedDictionary;
- (void)decodeFromNSDictionary:(id)arg1;

@end
