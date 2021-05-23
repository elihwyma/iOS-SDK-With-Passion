/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCharacteristicValueManager, HMCameraProfile, HMCameraStream;

@interface HFCameraAudioManager : NSObject

{
    HMCameraProfile *_cameraProfile;
    HMCameraStream *_cameraStream;
    HFCharacteristicValueManager *_valueManager;
}

@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HMCameraStream *cameraStream;
@property (retain, nonatomic) HFCharacteristicValueManager *valueManager;
@property (nonatomic, readonly) unsigned long long audioStreamSetting;
@property (nonatomic, readonly, getter=isOutgoingAudioEnabled) _Bool outgoingAudioEnabled;
@property (nonatomic, readonly, getter=isIncomingAudioEnabled) _Bool incomingAudioEnabled;
@property (nonatomic, readonly) float incomingAudioVolume;

- (id)updateAudioStreamSetting:(unsigned long long)arg1;
- (id)enableRemoteSpeakerIfNecessary;
- (id)enableRemoteMicrophoneIfNecessary;
- (id)_enableAudioIfNecessaryForAudioControl:(id)arg1 minVolume:(float)arg2;
- (id)_readValuesForCharacteristics:(id)arg1;
- (id)_writeValuesForCharacteristics:(id)arg1;
- (id)initWithCameraProfile:(id)arg1 cameraStream:(id)arg2 valueManager:(id)arg3;
- (id)setOutgoingAudioEnabled:(_Bool)arg1;
- (id)setIncomingAudioEnabled:(_Bool)arg1;
- (id)setIncomingAudioVolume:(float)arg1;

@end
