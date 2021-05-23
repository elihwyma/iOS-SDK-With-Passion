/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDictionary, NSMutableDictionary, PLXPCListenerOperatorComposition;

@interface PLCameraAgent : PLAgent

{
    _Bool _frontCameraIsOn;
    _Bool _backCameraIsOn;
    PLXPCListenerOperatorComposition *_cameraNotification;
    PLXPCListenerOperatorComposition *_torchNotification;
    NSMutableDictionary *_cameraState;
    NSDictionary *_torchPowerModel;
}

@property (readonly) PLXPCListenerOperatorComposition *cameraNotification;
@property (readonly) PLXPCListenerOperatorComposition *torchNotification;
@property _Bool frontCameraIsOn;
@property _Bool backCameraIsOn;
@property (retain) NSMutableDictionary *cameraState;
@property (nonatomic, readonly) _Bool allCamerasAreOff;
@property (readonly) NSDictionary *torchPowerModel;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionCamera;
+ (id)entryEventForwardDefinitionTorch;
+ (int)checkCameraType:(int)arg1;
+ (id)entryEventIntervalDefinitions;
+ (id)distributionFromCameraType:(int)arg1;
+ (_Bool)isFrontFacingCamera:(int)arg1;
+ (_Bool)isBackFacingCamera:(int)arg1;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)closeOpenCameraEventsAtDate:(id)arg1 withEntryKey:(id)arg2;
- (void)modelTorchPowerWithEntry:(id)arg1;
- (void)handleCameraEvent:(id)arg1 withEntryKey:(id)arg2;
- (void)handleTorchEvent:(id)arg1 withEntryKey:(id)arg2;
- (void)closeFrontCameraAtDate:(id)arg1;
- (void)modelFrontCameraPowerWithEntry:(id)arg1;
- (void)closeBackCameraAtDate:(id)arg1;
- (void)modelBackCameraPowerWithEntry:(id)arg1;
- (double)getCameraPower:(int)arg1;

@end
