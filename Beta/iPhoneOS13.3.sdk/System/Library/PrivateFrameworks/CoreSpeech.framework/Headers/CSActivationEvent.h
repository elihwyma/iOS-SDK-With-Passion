/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CSActivationEvent : NSObject

{
    float _vadScore;
    NSString *_UUID;
    unsigned long long _type;
    NSString *_deviceId;
    NSDictionary *_activationInfo;
    unsigned long long _hosttime;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSDictionary *activationInfo;
@property (nonatomic) unsigned long long hosttime;
@property (nonatomic) float vadScore;
@property (nonatomic, readonly) NSString *localizedDescription;

+ (id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;
+ (id)remoteMicVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;
+ (id)remoteMicVADEvent:(id)arg1 vadScore:(float)arg2 hostTime:(unsigned long long)arg3;
+ (id)jarvisVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;
+ (id)mediaserverdLaunchedEvent:(unsigned long long)arg1;

- (id)initWithXPCObject:(id)arg1;
- (id)xpcObject;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4;
- (id)_activationTypeString;

@end
