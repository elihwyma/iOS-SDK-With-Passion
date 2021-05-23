/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class AudioDevice, NSDate, NSDictionary, NSMutableArray, NSString, PLEntry, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLAudioAgent : PLAgent

{
    _Bool _headsetIsPlayingAudio;
    _Bool _speakerIsPlayingAudio;
    int _accessoryPowerState;
    NSMutableArray *_nsOutputNotifications;
    NSMutableArray *_nsRoutingNotifications;
    PLEntryNotificationOperatorComposition *_accessoryPowerCallback;
    PLXPCListenerOperatorComposition *_audioAppXPCListener;
    PLXPCListenerOperatorComposition *_screenMirroringXPCListener;
    PLXPCListenerOperatorComposition *_speakerAmpXPCListener;
    PLXPCListenerOperatorComposition *_hapticsXPCListener;
    PLEntry *_entryRoutingOld;
    double _currentVolume;
    NSString *_audioHardware;
    NSDictionary *_audioPowerModel;
    NSDate *_lastAudioStateChangeDate;
    AudioDevice *_defaultOutputDevice;
    AudioDevice *_defaultInputDevice;
    CDUnknownBlockType _defaultOutputDeviceHandlerBlock;
    CDUnknownBlockType _defaultInputDeviceHandlerBlock;
}

@property int accessoryPowerState;
@property (readonly) NSMutableArray *nsOutputNotifications;
@property (readonly) NSMutableArray *nsRoutingNotifications;
@property (retain) PLEntryNotificationOperatorComposition *accessoryPowerCallback;
@property (retain) PLXPCListenerOperatorComposition *audioAppXPCListener;
@property (retain) PLXPCListenerOperatorComposition *screenMirroringXPCListener;
@property (retain) PLXPCListenerOperatorComposition *speakerAmpXPCListener;
@property (retain) PLXPCListenerOperatorComposition *hapticsXPCListener;
@property (retain) PLEntry *entryRoutingOld;
@property _Bool headsetIsPlayingAudio;
@property _Bool speakerIsPlayingAudio;
@property double currentVolume;
@property (readonly) NSString *audioHardware;
@property (readonly) NSDictionary *audioPowerModel;
@property (retain) NSDate *lastAudioStateChangeDate;
@property (retain, nonatomic) AudioDevice *defaultOutputDevice;
@property (retain, nonatomic) AudioDevice *defaultInputDevice;
@property (copy, nonatomic) CDUnknownBlockType defaultOutputDeviceHandlerBlock;
@property (copy, nonatomic) CDUnknownBlockType defaultInputDeviceHandlerBlock;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionAudioApp;
+ (id)entryEventPointDefinitionSpeakerAmp;
+ (id)entryEventPointDefinitionHaptics;
+ (id)entryEventForwardDefinitionOutput;
+ (id)entryEventForwardDefinitionRouting;
+ (id)entryEventForwardDefinitionNowPlaying;
+ (id)entryEventForwardDefinitionAudioDevice;

- (id)init;
- (void)log;
- (_Bool)active;
- (id)volume;
- (_Bool)muted;
- (id)buildCallBack:(id)arg1 withGroup:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)initOperatorDependancies;
- (void)createCarPlayAccountingEvents:(id)arg1;
- (void)setupAVSystemController;
- (void)logEventForwardOutput;
- (void)logEventForwardRouting;
- (void)handleNowPlayingApplicationIsPlayingDidChange;
- (id)nowPlayingAppBundleID;
- (id)returnVolumeOrOutPutCategory:(int)arg1;
- (void)handleLightningStatusCallback:(id)arg1;
- (void)logEventPointAudioApp:(id)arg1;
- (void)logEventPointSpeakerAmp:(id)arg1;
- (void)logEventPointHaptics:(id)arg1;
- (void)closeAudioAccountingEvents;
- (void)createAudioAccountingEvents:(id)arg1;
- (void)createAirPlayAccountingEvents:(id)arg1;
- (void)createBluetoothAccountingEvents:(id)arg1;
- (void)modelAudioPowerSpeaker:(id)arg1;
- (void)modelAudioPower;
- (int)nowPlayingAppPID;
- (id)activeRoute;
- (id)outputCategory;
- (_Bool)headphonesConnected;
- (_Bool)headsetHasInput;
- (_Bool)shouldModelAudioPowerSpeakerTemp;
- (double)audioPowerForRoute:(id)arg1 forVolume:(double)arg2;
- (void)modelAudioPowerCodec:(id)arg1;
- (double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)arg1;
- (_Bool)initDefaultAudioDevice:(_Bool)arg1;
- (void)addDefaultAudioDeviceListener:(_Bool)arg1;
- (void)logEventForwardAudioDevice:(id)arg1;
- (double)modelAudioPowerWithVolume:(double)arg1;

@end
