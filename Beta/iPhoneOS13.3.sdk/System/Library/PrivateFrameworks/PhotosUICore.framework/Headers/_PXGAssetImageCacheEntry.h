/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@protocol PXDisplayAsset;

@interface _PXGAssetImageCacheEntry : NSObject

{
    unsigned int _imageOrientation;
    NSMutableIndexSet *_requestIDs;
    id <PXDisplayAsset> _asset;
    struct CGImage *_image;
}

@property (nonatomic, readonly) NSMutableIndexSet *requestIDs;
@property (retain, nonatomic) id <PXDisplayAsset> asset;
@property (nonatomic) struct CGImage *image;
@property (nonatomic) unsigned int imageOrientation;

- (id)init;
- (void)dealloc;
- (void)prepareForReuse;

@end
