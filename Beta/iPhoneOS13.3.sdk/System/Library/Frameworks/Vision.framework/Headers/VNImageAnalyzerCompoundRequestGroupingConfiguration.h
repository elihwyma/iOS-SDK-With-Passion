/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject

{
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (id)init;
- (id)originalRequests;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2;
- (id)detectorConfigurationOptions;
- (void)enumerateOriginalRequestsByKindUsingBlock:(CDUnknownBlockType)arg1;
- (id)processingDevice;
- (_Bool)preferBackgroundProcessing;

@end
