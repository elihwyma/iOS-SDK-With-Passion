/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface AFMyriadRecord : NSObject

{
    unsigned char _goodness;
    unsigned char _userConfidence;
    unsigned char _deviceGroup;
    unsigned char _deviceClass;
    unsigned char _tieBreaker;
    _Bool _isMe;
    unsigned short _pHash;
    NSUUID *_deviceID;
}

@property (nonatomic) unsigned char goodness;
@property (nonatomic) unsigned char userConfidence;
@property (nonatomic) unsigned short pHash;
@property (copy, nonatomic) NSUUID *deviceID;
@property (nonatomic) unsigned char deviceGroup;
@property (nonatomic) unsigned char deviceClass;
@property (nonatomic) unsigned char tieBreaker;
@property (nonatomic) _Bool isMe;

- (id)init;
- (id)description;
- (_Bool)isSlowdown;
- (id)initWithAudioData:(id)arg1;
- (void)adjustByMultiplier:(float)arg1 adding:(int)arg2;
- (id)initWithDeviceID:(id)arg1 data:(id)arg2;
- (void)generateTiebreaker;
- (void)generateRandomConfidence;
- (_Bool)isATrump;
- (_Bool)isInEarTrump;
- (_Bool)isCarplayTrump;
- (_Bool)isAContinuation;
- (_Bool)isAnEmergency;
- (_Bool)isAnEmergencyHandled;
- (_Bool)isSane;
- (int)slowdownDelay;
- (id)asAdvertisementData;

@end
