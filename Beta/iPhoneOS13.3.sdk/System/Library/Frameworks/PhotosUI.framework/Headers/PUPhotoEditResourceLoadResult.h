/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NUComposition, PHContentEditingInput, PICompositionController, PUPhotoEditIrisModel, UIImage;

@protocol PUEditableAsset;

@interface PUPhotoEditResourceLoadResult : NSObject

{
    _Bool _assetLoadingAsRaw;
    PICompositionController *_compositionController;
    NUComposition *_originalComposition;
    UIImage *_image;
    NSURL *_imageURL;
    NSString *_imageUTI;
    NSURL *_videoComplementURL;
    long long _retrievedVersion;
    long long _penultimateAvailability;
    id <PUEditableAsset> _asset;
    PHContentEditingInput *_contentEditingInput;
    PUPhotoEditIrisModel *_livePhotoModel;
    NSURL *_overcaptureImageURL;
    NSURL *_overcaptureVideoURL;
    CDStruct_1b6d18a9 _videoComplementStillImageTime;
    CDStruct_1b6d18a9 _videoComplementOriginalStillImageTime;
    CDStruct_1b6d18a9 _videoComplementDuration;
}

@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController;
@property (retain, nonatomic, setter=_setOriginalComposition:) NUComposition *originalComposition;
@property (retain, nonatomic, setter=_setLivePhotoModel:) PUPhotoEditIrisModel *livePhotoModel;
@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setImageURL:) NSURL *imageURL;
@property (retain, nonatomic, setter=_setImageUTI:) NSString *imageUTI;
@property (retain, nonatomic, setter=_setVideoComplementURL:) NSURL *videoComplementURL;
@property (nonatomic, setter=_setVideoComplementStillImageTime:) CDStruct_1b6d18a9 videoComplementStillImageTime;
@property (nonatomic) CDStruct_1b6d18a9 videoComplementOriginalStillImageTime;
@property (nonatomic, setter=_setVideoComplementDuration:) CDStruct_1b6d18a9 videoComplementDuration;
@property (nonatomic, setter=_setRetrievedVersion:) long long retrievedVersion;
@property (nonatomic, setter=_setPenultimateAvailability:) long long penultimateAvailability;
@property (retain, nonatomic, setter=_setAsset:) id <PUEditableAsset> asset;
@property (nonatomic, setter=_setAssetLoadingAsRaw:) _Bool assetLoadingAsRaw;
@property (retain, nonatomic, setter=_setContentEditingInput:) PHContentEditingInput *contentEditingInput;
@property (retain, nonatomic) NSURL *overcaptureImageURL;
@property (retain, nonatomic) NSURL *overcaptureVideoURL;
@property (nonatomic, readonly, getter=isPenultimateAvailable) _Bool penultimateAvailable;

+ (id)resultWithContentEditingInput:(id)arg1 asset:(id)arg2;

- (id)editSource;
- (id)overcaptureEditSource;

@end
