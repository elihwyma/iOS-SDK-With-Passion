/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSError, PHImageRequestOptions, UIImage;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequest : NSObject

{
    _Bool _gotFullQualityImage;
    _Bool _resultIsInCloud;
    _Bool _canceled;
    id <PXUIImageProvider> _mediaProvider;
    id <PXDisplayAsset> _asset;
    PHImageRequestOptions *_options;
    long long _requestID;
    UIImage *_image;
    NSError *_error;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) id <PXUIImageProvider> mediaProvider;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (nonatomic) long long requestID;
@property (nonatomic) UIImage *image;
@property (nonatomic) _Bool gotFullQualityImage;
@property (nonatomic) _Bool resultIsInCloud;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;

- (id)description;
- (void)cancel;
- (void)performWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize)arg3 options:(id)arg4;

@end
