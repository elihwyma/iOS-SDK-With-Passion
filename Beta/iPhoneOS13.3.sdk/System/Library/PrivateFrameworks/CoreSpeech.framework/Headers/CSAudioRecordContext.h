/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject

{
    _Bool _alwaysUseRemoteBuiltInMic;
    long long _type;
    NSString *_deviceId;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) _Bool alwaysUseRemoteBuiltInMic;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

+ (id)defaultContext;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForJarvisWithDeviceId:(id)arg1;
+ (id)contextForServerInvoke;
+ (id)recordTypeString:(long long)arg1;
+ (id)contextForBTLE;
+ (id)contextForVoiceTriggerTraining;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)avvcContext;
- (id)avvcContextSettings;
- (_Bool)isRTSTriggered;
- (_Bool)isHearstVoiceTriggered;
- (id)initWithRecordType:(long long)arg1 deviceId:(id)arg2;
- (long long)recordTypeFromAVVCActivationMode:(long long)arg1;
- (id)_createAVVCContextWithType:(long long)arg1 deviceId:(id)arg2;
- (long long)avvcActivationMode:(long long)arg1;
- (_Bool)isBuiltInVoiceTriggered;
- (_Bool)isJarvisVoiceTriggered;
- (_Bool)isHearstDoubleTapTriggered;
- (id)initWithAVVCContext:(id)arg1;
- (_Bool)isVoiceTriggered;
- (_Bool)isTriggeredFromHearst;
- (_Bool)isServerInvoked;
- (_Bool)isStarkTriggered;

@end
