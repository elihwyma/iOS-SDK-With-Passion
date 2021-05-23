/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer

{
    NSMutableDictionary *_activeFaces;
    struct CGAffineTransform _transform;
    NSMutableArray *_faceResults;
}

- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (id)publicResults;
- (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;

@end
