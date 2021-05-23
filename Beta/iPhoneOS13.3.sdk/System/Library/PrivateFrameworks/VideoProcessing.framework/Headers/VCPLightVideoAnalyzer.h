/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class AVAsset, NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPLightVideoAnalyzer : NSObject

{
    unsigned long long _requestedAnalyses;
    AVAsset *_avAsset;
    struct CGAffineTransform _transform;
    NSArray *_metaTracks;
    NSMutableDictionary *_publicMutableResults;
    NSMutableDictionary *_privateMutableResults;
}

@property (nonatomic, readonly) NSDictionary *publicResults;
@property (nonatomic, readonly) NSDictionary *privateResults;

- (id)findMetaTrackforType:(id)arg1;
- (int)processMetaTrackForType:(id)arg1 cancel:(CDUnknownBlockType)arg2 flags:(unsigned long long *)arg3;
- (int)checkTimeRangeConsistency;
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (int)analyzeAsset:(CDUnknownBlockType)arg1 flags:(unsigned long long *)arg2;

@end
