/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject

{
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    unsigned long long _requestRevision;
}

- (id)operationPointsAndReturnError:(id *)arg1;
- (id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2;

@end
