/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject

{
    unsigned long long _detectorModel;
    NSMutableDictionary *_sceneLabelOperationPointsForRequestRevision;
}

- (id)sceneLabelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithDetectorModel:(unsigned long long)arg1;

@end
