//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REBluetoothPredictorProperties-Protocol.h>

@class NSDictionary, REDuetContextQuery, REUpNextScheduler;

@interface REBluetoothPredictor : REPredictor <REBluetoothPredictorProperties>
{
    REDuetContextQuery *_connectCarQuery;
    REDuetContextQuery *_connectAudioQuery;
    REUpNextScheduler *_bluetoothNotificationScheduler;
    BOOL _connectedToCar;
    BOOL _connectedToSpeaker;
    NSDictionary *_localDevices;
}

+ (id)supportedFeatures;
@property(retain) NSDictionary *localDevices; // @synthesize localDevices=_localDevices;
@property(getter=_isConnectedToSpeaker, setter=_setConnectedToSpeaker:) BOOL _connectedToSpeaker; // @synthesize _connectedToSpeaker;
@property(getter=_isConnctedToCar, setter=_setConnectedToCar:) BOOL _connectedToCar; // @synthesize _connectedToCar;
// - (void).cxx_destruct;
- (void)_unregisterForBluetoothNotifications;
- (void)_registerForBluetoothNotifications;
@property(readonly) BOOL connectedToCar;
@property(readonly) BOOL connectedToSpeaker;
- (void)update;
- (void)pause;
- (void)resume;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)_init;

@end
