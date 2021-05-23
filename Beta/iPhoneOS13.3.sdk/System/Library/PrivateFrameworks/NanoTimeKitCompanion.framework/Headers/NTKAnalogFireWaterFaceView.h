/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogFireWaterFaceView : NTKAnalogVideoFaceView

{
    unsigned long long _currentColor;
    unsigned long long _currentDialShape;
    NSDictionary *_dataSources;
}

@property (nonatomic) unsigned long long currentColor;
@property (nonatomic) unsigned long long currentDialShape;
@property (retain, nonatomic) NSDictionary *dataSources;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_nameForColor:(unsigned long long)arg1;

- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (_Bool)_wantsConstantSpeedZoom;
- (id)imageForEditOption:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (id)_complicationsCompanionForegroundColor;
- (void)reloadDataSources;
- (void)_updateDialSize;
- (void)setupDataSources;
- (id)_swatchImageForColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2;

@end
