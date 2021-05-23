/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest

{
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)allowsCachingOfResults;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (_Bool)wantsSequencedRequestObservationsRecording;
- (id)cachedFloatingImageBufferReturningError:(id *)arg1;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)arg1;
- (_Bool)getReferenceImageBuffer:(id *)arg1 registrationSignature:(id *)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id *)arg5;

@end
