/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSMyriadPHash : NSObject

{
    float *_hammingWindow;
    struct OpaqueFFTSetup *_setup;
    float *_snrWindow;
    struct OpaqueFFTSetup *_snrSetup;
    unsigned char _signalFractional;
    short _signalEstimate;
}

@property (nonatomic) short signalEstimate;
@property (nonatomic) unsigned char signalFractional;

+ (void)notifyHashlessTrigger:(unsigned long long)arg1;
+ (id)createHashResult:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5;
+ (_Bool)writeHashResultIntoFile:(id)arg1;
+ (void)notifyAudioHashNotification;
+ (id)generateEmptyPHash:(unsigned long long)arg1;
+ (void)notifyAudioHashlessNotification;
+ (void)setLastHash:(id)arg1;
+ (id)currentMyriadPHash;
+ (_Bool)writeHashlessResult:(unsigned long long)arg1;
+ (id)lastHash;

- (id)init;
- (void)dealloc;
- (id)cachedHash;
- (unsigned short)pHash:(float *)arg1 length:(int)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (id)_audioLogDirectory;
- (id)_generateMyriadInfo:(unsigned long long)arg1 score:(float)arg2 triggerSource:(id)arg3 channel:(unsigned long long)arg4 audioProviderUUID:(id)arg5 absoluteTime:(unsigned long long)arg6;
- (id)generatePHashFromVoiceTriggerInfo:(id)arg1;

@end
