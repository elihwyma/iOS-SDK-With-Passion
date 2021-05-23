/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

__attribute__((visibility("hidden")))
@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer

{
    int _chunk;
    struct CGRect _region[5];
    float _score[5];
    int _maxNumRegions;
    _Bool _prune;
}

+ (id)analyzerWith:(int)arg1 prune:(_Bool)arg2;

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(_Bool)arg4 results:(id)arg5;
- (id)initWithMaxNumRegions:(int)arg1 prune:(_Bool)arg2;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChunk:(int)arg3;
- (float)outputScaling;
- (float)computeScore:(float *)arg1 width:(int)arg2 height:(int)arg3 posX:(int)arg4 posY:(int)arg5;
- (int)scaleImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withWidth:(int)arg3 andHeight:(int)arg4;
- (int)getSalientRegions:(CDUnknownBlockType)arg1;
- (int)saliencyDetection:(struct __CVBuffer *)arg1 salientRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (id)pruneRegions:(id)arg1;
- (int)generateSalientRegion:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3;

@end
