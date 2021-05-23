/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer

{
    NSMutableArray *_results;
}

- (id)init;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (id)publicResults;
- (id)convertQuickTimeVideoOrientationToUIOrientation:(long long)arg1;

@end
