/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface VSPresynthesizedAudioRequest : NSObject

{
    _Bool _enqueue;
    unsigned int _audioSessionID;
    NSData *_audioData;
    NSString *_text;
    NSString *_identifier;
    unsigned long long _requestCreatedTimestamp;
    NSString *_clientBundleIdentifier;
    unsigned long long _pcmDataSize;
    CDUnknownBlockType _stopHandler;
    struct AudioStreamBasicDescription _decoderStreamDescription;
    struct AudioStreamBasicDescription _playerStreamDescription;
}

@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) unsigned long long pcmDataSize;
@property (copy, nonatomic) CDUnknownBlockType stopHandler;
@property (nonatomic) unsigned int audioSessionID;
@property (copy, nonatomic, readonly) NSData *audioData;
@property (nonatomic, readonly) struct AudioStreamBasicDescription decoderStreamDescription;
@property (nonatomic, readonly) struct AudioStreamBasicDescription playerStreamDescription;
@property (nonatomic) _Bool enqueue;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long requestCreatedTimestamp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithAudioData:(id)arg1 decoderStreamDescription:(struct AudioStreamBasicDescription)arg2 playerStreamDescription:(struct AudioStreamBasicDescription)arg3;
- (id)initWithAudioData:(id)arg1 playerStreamDescription:(struct AudioStreamBasicDescription)arg2;

@end
