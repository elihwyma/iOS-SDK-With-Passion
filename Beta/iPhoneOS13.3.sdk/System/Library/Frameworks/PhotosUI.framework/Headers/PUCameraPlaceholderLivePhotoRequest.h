/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURL, NSValue, PHAsset, UIImage;

__attribute__((visibility("hidden")))
@interface PUCameraPlaceholderLivePhotoRequest : NSObject

{
    _Bool _imageRequestFinished;
    _Bool _videoRequestFinished;
    UIImage *_image;
    NSURL *_videoURL;
    NSValue *_stillDisplayTime;
    NSString *_filterName;
    NSError *_error;
    PHAsset *_asset;
    CDUnknownBlockType _resultHandler;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSValue *stillDisplayTime;
@property (copy, nonatomic) NSString *filterName;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool imageRequestFinished;
@property (nonatomic) _Bool videoRequestFinished;
@property (nonatomic, readonly) PHAsset *asset;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (id)initWithAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
