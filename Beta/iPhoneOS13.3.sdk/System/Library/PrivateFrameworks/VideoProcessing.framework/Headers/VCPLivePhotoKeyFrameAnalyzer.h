/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPLivePhotoKeyFrameAnalyzer : NSObject

{
    _Bool _photoSharpnessReliable;
    float _photoSharpness;
    _Bool _petsDominant;
    _Bool _ignoreFace;
    float *_faceHeatMap;
    int _width;
    int _height;
}

- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (void)createFaceHeatMap:(id)arg1 imageFaces:(id)arg2;
- (float)computeOverallFaceQualityScore:(id)arg1;
- (CDStruct_e83c9415)selectKeyFrameRangeWithMotion:(id)arg1 stillTimestamp:(float)arg2 isMetaMotion:(_Bool)arg3;
- (void)fetchAndComputeScoreForKeyFrame:(id)arg1 withResult:(id)arg2;
- (float)computeScoreForPhoto:(float)arg1 withRefKeyFrame:(id)arg2;
- (int)reportLivePhotoKeyFrameAnalysisResults:(_Bool)arg1 selectedKeyFrame:(id)arg2 originalStillKeyFrame:(id)arg3 stillScore:(float)arg4 stillFQScore:(float)arg5 stillTimestamp:(float)arg6 useSemanticOnly:(_Bool)arg7 isKeyFrameSuggested:(_Bool)arg8;
- (float)getFaceHeat:(struct CGRect)arg1;
- (void)updateFaceHeatMap:(id)arg1 numOfFrames:(int)arg2;
- (int)analyzeLivePhotoKeyFrame:(id)arg1 irisPhotoOffsetSec:(float)arg2 originalIrisPhotoOffsetSec:(float)arg3 photoTextureScore:(float)arg4 hadFlash:(_Bool)arg5 cancel:(CDUnknownBlockType)arg6;

@end
