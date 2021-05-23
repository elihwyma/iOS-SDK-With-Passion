/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPExifAnalyzer : NSObject

{
    NSDictionary *_properties;
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_results;
}

- (struct CGAffineTransform)transformUprightAboutTopLeft:(unsigned int)arg1;
- (int)addFaceResults:(id)arg1 flags:(unsigned long long *)arg2;
- (id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (int)analyzeAsset:(unsigned long long *)arg1 results:(id *)arg2;

@end
