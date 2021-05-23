/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSObject, PXGImageTexture;

@protocol OS_dispatch_queue;

@protocol PXGTextureConverter <Swift>

@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) PXGImageTexture *transparentTexture;
@property (nonatomic, readonly) _Bool supportsTextureAtlas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;

- (unsigned short)createTextureFromCGImage:orientation: /* Error: Ran out of types for this method. */;
- (unsigned short)createTextureFromCVPixelBuffer:transform: /* Error: Ran out of types for this method. */;
- (unsigned short)createPayloadTextureFromPayload: /* Error: Ran out of types for this method. */;
- (unsigned short)createTextureAtlasManagerForImageDataSpec: /* Error: Ran out of types for this method. */;

@end
