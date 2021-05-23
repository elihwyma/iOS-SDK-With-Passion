/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequest.h>

@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest

@property (nonatomic) struct CGRect regionOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputFaceObservations;

+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)validateConfigurationAndReturnError:(id *)arg1;
- (_Bool)getOptionalValidatedInputFaceObservations:(id *)arg1 clippedToRegionOfInterest:(_Bool)arg2 error:(id *)arg3;
- (id)validatedInputFaceObservationsClippedToRegionOfInterest:(_Bool)arg1 error:(id *)arg2;
- (_Bool)isFullCoverageRegionOfInterest;
- (struct CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;

@end
