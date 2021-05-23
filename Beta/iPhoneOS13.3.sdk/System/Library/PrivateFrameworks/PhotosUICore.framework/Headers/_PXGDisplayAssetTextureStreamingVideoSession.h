/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

@protocol PXGDisplayAssetPixelBufferSource;

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject

{
    NSMutableIndexSet *_textureRequestIDs;
    id <PXGDisplayAssetPixelBufferSource> _pixelBufferSource;
}

@property (nonatomic, readonly) id <PXGDisplayAssetPixelBufferSource> pixelBufferSource;
@property (copy, nonatomic, readonly) NSIndexSet *textureRequestIDs;

- (void)removeTextureRequestIDs:(id)arg1;
- (void)addTextureRequestID:(int)arg1;
- (id)initWithPixelBufferSource:(id)arg1;
- (void)removeTextureRequestID:(int)arg1;

@end
