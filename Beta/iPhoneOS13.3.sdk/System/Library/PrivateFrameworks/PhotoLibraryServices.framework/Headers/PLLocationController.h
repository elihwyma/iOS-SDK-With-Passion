/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString, PLPhotoLibrary;

@interface PLLocationController : NSObject

{
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    _Bool _isEnabled;
    _Bool _isUpdating;
    _Bool _isHeadingEnabled;
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)usesEffectiveBundleIdentifier;
+ (void)setUsesEffectiveBundleIdentifier:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (id)location;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationString;
- (void)setHeadingEnabled:(_Bool)arg1;
- (void)_startUpdating;
- (void)_stopUpdating;
- (id)photoLibrary;
- (void)_updateLocationRunState;
- (void)_applicationStateChanged:(id)arg1;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(_Bool)arg2;
- (_Bool)_addLocationToAsset:(id)arg1;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(_Bool)arg3;
- (void)_updatePendingAssets;
- (void)_assetContainerChanged:(id)arg1;

@end
