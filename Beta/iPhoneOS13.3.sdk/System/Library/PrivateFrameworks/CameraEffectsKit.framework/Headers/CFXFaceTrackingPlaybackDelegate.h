/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class ARFrame, AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, AVAssetTrack, AVMetadataItem, JTFaceAnchor;

@interface CFXFaceTrackingPlaybackDelegate : NSObject

{
    ARFrame *_stillImageARFrame;
    JTFaceAnchor *_stillImageFaceAnchor;
    AVAssetTrack *_metadataAssetTrack;
    AVAssetTrack *_arFrameMetadataAssetTrack;
    AVAssetTrack *_faceAnchorMetadataAssetTrack;
    AVAssetReader *_metadataAssetReader;
    AVAssetReaderTrackOutput *_metadataTrackReaderOutput;
    AVAssetReaderOutputMetadataAdaptor *_assetReaderOutputMetadataAdaptor;
    AVMetadataItem *_currentMetadataItem;
    AVMetadataItem *_nextMetadataItem;
}

@property (retain, nonatomic) ARFrame *stillImageARFrame;
@property (retain, nonatomic) JTFaceAnchor *stillImageFaceAnchor;
@property (retain, nonatomic) AVAssetTrack *metadataAssetTrack;
@property (retain, nonatomic) AVAssetTrack *arFrameMetadataAssetTrack;
@property (retain, nonatomic) AVAssetTrack *faceAnchorMetadataAssetTrack;
@property (retain, nonatomic) AVAssetReader *metadataAssetReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *metadataTrackReaderOutput;
@property (retain, nonatomic) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor;
@property (retain, nonatomic) AVMetadataItem *currentMetadataItem;
@property (retain, nonatomic) AVMetadataItem *nextMetadataItem;

- (id)initWithAssetURL:(id)arg1;
- (void)CFX_setUpMetadataReaderForTrack:(id)arg1;
- (id)CFX_ARFrameForTime:(CDStruct_1b6d18a9)arg1;
- (id)CFX_JTFaceAnchorForTime:(CDStruct_1b6d18a9)arg1;
- (void)CFX_updateCurrentMetadataItemForTime:(CDStruct_1b6d18a9)arg1;
- (id)renderWithInputs:(id)arg1 time:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3;
- (id)initWithImageARFrame:(id)arg1;
- (id)initWithImageFaceAnchor:(id)arg1;

@end
