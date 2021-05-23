/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class AVAsset, AVAudioMix, AVComposition, AVVideoComposition, NSString, NUImageGeometry;

@protocol NURenderStatistics;

@interface _NUVideoRenderResult : _NURenderResult

{
    AVAsset *_video;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NUImageGeometry *_geometry;
}

@property (retain) AVAsset *video;
@property (retain) AVVideoComposition *videoComposition;
@property (retain) AVAudioMix *audioMix;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;
@property (readonly) AVComposition *avAsset;
@property (readonly) AVVideoComposition *avVideoComposition;

@end
