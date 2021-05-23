/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class ARFrame, AVAsset, AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, AVAssetTrack, AVMetadataItem, CFXAnimojiEffectRenderer, PVCMSampleBuffer;

@interface CFXAnimojiPlaybackDelegate : NSObject

{
    CFXAnimojiEffectRenderer *_animojiRenderer;
    ARFrame *_stillImageARFrame;
    AVAsset *_assetWithDepthVideoTrack;
    AVAssetTrack *_depthVideoTrack;
    AVAssetReaderTrackOutput *_depthVideoTrackReaderOutput;
    AVAssetReader *_depthVideoAssetReader;
    PVCMSampleBuffer *_currentDepthSample;
    PVCMSampleBuffer *_nextDepthSample;
    AVAssetTrack *_metadataAssetTrack;
    AVAssetReader *_metadataAssetReader;
    AVAssetReaderTrackOutput *_metadataTrackReaderOutput;
    AVAssetReaderOutputMetadataAdaptor *_assetReaderOutputMetadataAdaptor;
    AVMetadataItem *_currentMetadataItem;
    AVMetadataItem *_nextMetadataItem;
}

@property (retain, nonatomic) CFXAnimojiEffectRenderer *animojiRenderer;
@property (retain, nonatomic) ARFrame *stillImageARFrame;
@property (retain, nonatomic) AVAsset *assetWithDepthVideoTrack;
@property (retain, nonatomic) AVAssetTrack *depthVideoTrack;
@property (retain, nonatomic) AVAssetReaderTrackOutput *depthVideoTrackReaderOutput;
@property (retain, nonatomic) AVAssetReader *depthVideoAssetReader;
@property (retain, nonatomic) PVCMSampleBuffer *currentDepthSample;
@property (retain, nonatomic) PVCMSampleBuffer *nextDepthSample;
@property (retain, nonatomic) AVAssetTrack *metadataAssetTrack;
@property (retain, nonatomic) AVAssetReader *metadataAssetReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *metadataTrackReaderOutput;
@property (retain, nonatomic) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor;
@property (retain, nonatomic) AVMetadataItem *currentMetadataItem;
@property (retain, nonatomic) AVMetadataItem *nextMetadataItem;

- (id)initWithAssetURL:(id)arg1;
- (void)CFX_setUpMetadataReaderForTrack:(id)arg1;
- (void)CFX_updateCurrentMetadataItemForTime:(CDStruct_1b6d18a9)arg1;
- (id)renderWithInputs:(id)arg1 time:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3;
- (id)initWithImageARFrame:(id)arg1;
- (void)CFX_setUpDepthReaderForTrack:(id)arg1;
- (id)CFX_ARFrameForTime:(CDStruct_1b6d18a9)arg1 depthTexture:(id *)arg2;
- (void)CFX_updateCurrentDepthBufferForTime:(CDStruct_1b6d18a9)arg1;

@end
