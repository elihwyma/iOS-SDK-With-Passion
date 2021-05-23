/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWNodeOutput;

@interface BWCameraInfoMetadataNode : BWNode

{
    _Bool _generateLivePhotosMetadata;
    struct opaqueCMFormatDescription *_boxedMetadataFormatDescription;
    _Bool _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer *_emptyMetadataSampleData;
    BWNodeOutput *_passthruOutput;
    BWNodeOutput *_boxedMetadataOutput;
    unsigned int _localIDForLivePhotosMetadata_BE;
}

@property (nonatomic, readonly) BWNodeOutput *passthruOutput;
@property (nonatomic, readonly) BWNodeOutput *boxedMetadataOutput;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (id)_initForMotionMetadataSource:(int)arg1 generateLivePhotosMetadata:(_Bool)arg2 generateDebugMetadata:(_Bool)arg3;
- (void)_emitLivePhotosAndDebugBoxedMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (struct OpaqueCMBlockBuffer *)_emptyMetadataBlockBuffer;
- (id)initForLivePhotosMetadata:(_Bool)arg1 generateDebugMetadata:(_Bool)arg2;

@end
