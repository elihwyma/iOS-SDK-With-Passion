/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long maximumIntermediateSideLength;
@property (nonatomic) unsigned long long blurDeterminationMethod;

+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;

@end
