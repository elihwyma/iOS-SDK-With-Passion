/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantConfig : NSObject

{
    NSData *_participantData;
    NSString *_uuid;
    unsigned long long _idsParticipantID;
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _frequencyMeteringEnabled;
    _Bool _audioMuted;
    float _volume;
    float _audioPosition;
    _Bool _audioPaused;
    _Bool _videoPaused;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
}

@property (retain, nonatomic) NSData *participantData;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) _Bool audioEnabled;
@property (nonatomic) _Bool videoEnabled;
@property (nonatomic) _Bool frequencyMeteringEnabled;
@property (nonatomic) _Bool audioMuted;
@property (nonatomic) float volume;
@property (nonatomic) float audioPosition;
@property (nonatomic) _Bool audioPaused;
@property (nonatomic) _Bool videoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;

- (void)dealloc;
- (id)description;

@end
