/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface PXPeopleFaceTileImageRequestResult : NSObject

{
    _Bool _isDegraded;
    _Bool _isVeryLowQuality;
    UIImage *_image;
    id _originalObjectID;
    id _assetObjectID;
    struct CGSize _originalImageSize;
    struct CGRect _faceRect;
    struct PXFaceTileImageParams _params;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGRect faceRect;
@property (nonatomic, readonly) _Bool isDegraded;
@property (retain, nonatomic) id originalObjectID;
@property (retain, nonatomic) id assetObjectID;
@property (nonatomic) struct PXFaceTileImageParams params;
@property (nonatomic) _Bool isVeryLowQuality;
@property (nonatomic) struct CGSize originalImageSize;

- (id)description;
- (id)initWithImage:(id)arg1 faceRect:(struct CGRect)arg2 isDegraded:(_Bool)arg3;

@end
