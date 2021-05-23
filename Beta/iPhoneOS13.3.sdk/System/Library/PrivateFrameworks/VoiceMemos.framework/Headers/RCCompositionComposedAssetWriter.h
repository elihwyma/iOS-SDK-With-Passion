/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class AVAssetExportSession, RCComposition, RCWaveformDataSource;

@interface RCCompositionComposedAssetWriter : NSObject

{
    AVAssetExportSession *_exportSession;
    RCWaveformDataSource *_waveformDataSource;
    _Bool _canGenerateWaveform;
    _Bool _canGenerateWaveformByProcessingAVURL;
    _Bool _canSaveCompositionMetadata;
    RCComposition *_composition;
}

@property (nonatomic, readonly) RCComposition *composition;
@property (nonatomic) _Bool canGenerateWaveform;
@property (nonatomic) _Bool canGenerateWaveformByProcessingAVURL;
@property (nonatomic) _Bool canSaveCompositionMetadata;
@property (nonatomic, readonly) float progress;

- (void)cancel;
- (id)initWithComposition:(id)arg1;
- (void)writeCompositionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_writeCompositionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
