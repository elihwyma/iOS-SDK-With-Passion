/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest

{
    NSArray *_inputFaceObservations;
}

@property (copy, nonatomic, readonly) NSArray *inputFaceObservations;

+ (Class)configurationClass;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)newDefaultRequestInstance;
- (id)initWithFaceObservations:(id)arg1;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;

@end
