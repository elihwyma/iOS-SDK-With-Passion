/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNCreateImageprintRequest : VNImageBasedRequest

@property (retain, nonatomic) NSNumber *timeStamp;

+ (Class)configurationClass;

- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;

@end
