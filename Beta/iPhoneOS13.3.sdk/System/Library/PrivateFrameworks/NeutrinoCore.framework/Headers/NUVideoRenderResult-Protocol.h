/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class AVAsset, AVAudioMix, AVComposition, AVVideoComposition, NUImageGeometry;

@protocol NUVideoRenderResult <Swift>

@property (readonly) AVAsset *video;
@property (readonly) AVComposition *avAsset;
@property (readonly) AVVideoComposition *videoComposition;
@property (readonly) AVVideoComposition *avVideoComposition;
@property (readonly) AVAudioMix *audioMix;
@property (readonly) NUImageGeometry *geometry;

@end
