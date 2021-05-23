/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogSmokeFaceView : NTKAnalogVideoFaceView

{
    _Bool _shouldApplyTransform;
    unsigned long long _currentSmokeColor;
    unsigned long long _currentDialShape;
    NSDictionary *_dataSources;
}

@property (nonatomic) unsigned long long currentSmokeColor;
@property (nonatomic) unsigned long long currentDialShape;
@property (retain, nonatomic) NSDictionary *dataSources;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_nameForSmokeColor:(unsigned long long)arg1;

- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureTimeView:(id)arg1;
- (_Bool)_wantsConstantSpeedZoom;
- (id)imageForEditOption:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (id)_complicationsCompanionForegroundColor;
- (void)reloadDataSources;
- (void)_applyVideoPlayerTransform;
- (void)_updateDialSize;
- (void)setupDataSources;
- (id)_swatchImageForSmokeColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2;

@end
