/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSNumber, NSString;

@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet

{
    NSString *_cameraMake;
    NSString *_cameraModel;
    NSString *_lensModel;
    NSNumber *_flashFired;
    NSNumber *_whiteBalance;
    NSNumber *_meteringMode;
    NSNumber *_iso;
    NSNumber *_focalLength;
    NSNumber *_exposureBias;
    NSNumber *_aperture;
    NSNumber *_shutterSpeed;
    NSString *_codec;
    NSNumber *_fps;
    NSNumber *_duration;
    NSNumber *_sampleRate;
    NSNumber *_bitrate;
    NSNumber *_trackFormat;
}

@property (nonatomic, readonly) NSString *cameraMake;
@property (nonatomic, readonly) NSString *cameraModel;
@property (nonatomic, readonly) NSString *lensModel;
@property (nonatomic, readonly) NSNumber *flashFired;
@property (nonatomic, readonly) NSNumber *whiteBalance;
@property (nonatomic, readonly) NSNumber *meteringMode;
@property (nonatomic, readonly) NSNumber *iso;
@property (nonatomic, readonly) NSNumber *focalLength;
@property (nonatomic, readonly) NSNumber *exposureBias;
@property (nonatomic, readonly) NSNumber *aperture;
@property (nonatomic, readonly) NSNumber *shutterSpeed;
@property (nonatomic, readonly) NSString *codec;
@property (nonatomic, readonly) NSNumber *fps;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *sampleRate;
@property (nonatomic, readonly) NSNumber *bitrate;
@property (nonatomic, readonly) NSNumber *trackFormat;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
