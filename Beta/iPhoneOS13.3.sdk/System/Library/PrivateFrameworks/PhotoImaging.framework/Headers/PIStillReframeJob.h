/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderJob.h>

@class PIReframeResult, PIStillReframeRequest;

@interface PIStillReframeJob : NURenderJob

{
    PIReframeResult *_reframeResult;
}

@property (nonatomic, readonly) PIStillReframeRequest *stillReframeRequest;
@property (retain, nonatomic) PIReframeResult *reframeResult;

- (id)result;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithStillReframeRequest:(id)arg1;

@end
