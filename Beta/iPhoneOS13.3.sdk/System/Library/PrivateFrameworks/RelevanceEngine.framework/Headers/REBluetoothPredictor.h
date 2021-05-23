/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSDictionary, REDuetContextQuery, REUpNextScheduler;

@interface REBluetoothPredictor : REPredictor

{
    REDuetContextQuery *_connectCarQuery;
    REDuetContextQuery *_connectAudioQuery;
    REUpNextScheduler *_bluetoothNotificationScheduler;
    _Bool _connectedToCar;
    _Bool _connectedToSpeaker;
    NSDictionary *_localDevices;
}

@property (getter=_isConnctedToCar, setter=_setConnectedToCar:) _Bool _connectedToCar;
@property (getter=_isConnectedToSpeaker, setter=_setConnectedToSpeaker:) _Bool _connectedToSpeaker;
@property (retain) NSDictionary *localDevices;
@property (readonly) _Bool connectedToCar;
@property (readonly) _Bool connectedToSpeaker;

+ (id)supportedFeatures;

- (id)_init;
- (void)pause;
- (void)resume;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)_registerForBluetoothNotifications;
- (void)_unregisterForBluetoothNotifications;

@end
