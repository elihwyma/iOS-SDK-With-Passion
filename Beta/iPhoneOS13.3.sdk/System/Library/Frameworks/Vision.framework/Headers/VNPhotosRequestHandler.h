/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNRequestPerformer;

@interface VNPhotosRequestHandler : NSObject

{
    VNRequestPerformer *_requestPerformer;
    CDUnknownBlockType _burstAnalysisLoggingCallback;
    NSObject *_modelContextObject;
}

@property (retain, nonatomic) NSObject *modelContextObject;
@property (copy, nonatomic) CDUnknownBlockType burstAnalysisLoggingCallback;

- (id)init;
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;
- (void)cancelAllRequests;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;

@end
