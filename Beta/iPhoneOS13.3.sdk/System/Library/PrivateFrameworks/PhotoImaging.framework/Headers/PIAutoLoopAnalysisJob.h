/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderJob.h>

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob

{
    AVAsset *_videoSource;
    NSDictionary *_recipe;
}

@property (retain, nonatomic) AVAsset *videoSource;
@property (retain, nonatomic) NSDictionary *recipe;

- (id)result;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (id)scalePolicy;
- (_Bool)wantsOutputVideo;
- (id)analysisRequest;

@end
