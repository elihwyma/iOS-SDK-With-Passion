/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderJob.h>

@class NSArray;

@interface PIVideoReframeRenderJob : NURenderJob

{
    NSArray *_keyframes;
    double _confidence;
    CDStruct_996ac03c _stabCropRect;
}

@property (copy, nonatomic, readonly) NSArray *keyframes;
@property (nonatomic, readonly) CDStruct_996ac03c stabCropRect;
@property (nonatomic, readonly) double confidence;

- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsRenderStage;
- (_Bool)wantsCompleteStage;
- (id)scalePolicy;
- (_Bool)wantsOutputVideo;
- (id)videoReframeRequest;
- (void)_writeDiagnosticFilesForReframer:(id)arg1 metadata:(id)arg2;
- (_Bool)_createStabilizedKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(CDStruct_996ac03c)arg3 timedMetadata:(id)arg4 error:(out id *)arg5;
- (_Bool)_createKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(CDStruct_996ac03c)arg3 timedMetadata:(id)arg4 error:(out id *)arg5;

@end
