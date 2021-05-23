/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class AVAsset, CLLocation, NSDate, NSMutableArray, NSNumber, NSString, NSURL, PHAdjustmentData, PHLivePhoto, UIImage;

@protocol OS_dispatch_queue;

@interface PHContentEditingInput : NSObject

{
    NSObject<OS_dispatch_queue> *_avAssetIsolationQueue;
    NSMutableArray *_sandboxExtensionHandles;
    int _fullSizeImageOrientation;
    AVAsset *_avAsset;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    NSDate *_creationDate;
    CLLocation *_location;
    NSString *_uniformTypeIdentifier;
    long long _playbackStyle;
    PHAdjustmentData *_adjustmentData;
    UIImage *_displaySizeImage;
    NSURL *_fullSizeImageURL;
    PHLivePhoto *_livePhoto;
    long long _baseVersion;
    NSNumber *_originalResourceChoice;
    NSURL *_videoURL;
    NSURL *_overCapturePhotoURL;
    NSURL *_overCaptureVideoURL;
    NSURL *_frontSwappingImageRenderURL;
    NSURL *_backSwappingImageRenderURL;
    NSURL *_frontSwappingVideoRenderURL;
    NSURL *_backSwappingVideoRenderURL;
    PHAdjustmentData *_originalAdjustmentData;
}

@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long playbackStyle;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) PHAdjustmentData *adjustmentData;
@property (nonatomic) long long baseVersion;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (retain, nonatomic) UIImage *displaySizeImage;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (copy, nonatomic) NSURL *fullSizeImageURL;
@property (nonatomic) int fullSizeImageOrientation;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (copy, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSURL *overCapturePhotoURL;
@property (copy, nonatomic) NSURL *overCaptureVideoURL;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL;
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData;
@property (readonly) AVAsset *avAsset;
@property (readonly) AVAsset *audiovisualAsset;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)videoComposition;
- (id)audioMix;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
- (void)loadFullSizeImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)imagePreview;
- (void)requestFullSizeImageURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)consumeSandboxExtensionToken:(id)arg1;
- (void)_invalidateAVAsset;

@end
