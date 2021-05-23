/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTClip, NSData, NSURL;

@interface CFXMediaItem : NSObject

{
    _Bool _initializedWithoutSettingAllProperties;
    _Bool _adjustmentsDataWasSet;
    JTClip *_clip;
    NSURL *_adjustedAssetURL;
    NSURL *_originalAssetURL;
    long long _type;
    long long _cameraMode;
}

@property (nonatomic) _Bool initializedWithoutSettingAllProperties;
@property (nonatomic) _Bool adjustmentsDataWasSet;
@property (nonatomic, readonly) long long cameraMode;
@property (nonatomic, readonly) JTClip *clip;
@property (copy, nonatomic) NSData *adjustmentsData;
@property (copy, nonatomic) NSURL *adjustedAssetURL;
@property (copy, nonatomic) NSURL *originalAssetURL;
@property (nonatomic) long long type;

- (id)init;
- (void)createClipForMediaType:(long long)arg1 assetURL:(id)arg2 cameraMode:(long long)arg3 effectStack:(id)arg4;
- (id)initWithCameraMode:(long long)arg1 clip:(id)arg2 originalAssetURL:(id)arg3;
- (id)initWithType:(long long)arg1 originalAssetURL:(id)arg2 adjustmentsData:(id)arg3;

@end
