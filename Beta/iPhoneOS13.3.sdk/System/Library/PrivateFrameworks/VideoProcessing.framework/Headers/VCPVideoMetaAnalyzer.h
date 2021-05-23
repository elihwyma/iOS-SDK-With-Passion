/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaAnalyzer : NSObject

@property (retain, nonatomic, readonly) NSDictionary *publicResults;
@property (retain, nonatomic, readonly) NSDictionary *privateResults;

+ (id)analyzerForTrackType:(id)arg1 withTransform:(struct CGAffineTransform)arg2;

- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;

@end
