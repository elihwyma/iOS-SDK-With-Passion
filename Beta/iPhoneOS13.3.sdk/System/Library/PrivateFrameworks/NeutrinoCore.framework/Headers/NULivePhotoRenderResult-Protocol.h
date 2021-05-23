/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class AVAsset, AVVideoComposition, NUImageGeometry;

@protocol NULivePhotoRenderResult <Swift>

@property (readonly) AVAsset *video;
@property (readonly) AVVideoComposition *videoComposition;
@property (readonly) struct CGImage *photo;
@property (readonly) CDStruct_1b6d18a9 photoTime;
@property (readonly) NUImageGeometry *videoGeometry;

@end
