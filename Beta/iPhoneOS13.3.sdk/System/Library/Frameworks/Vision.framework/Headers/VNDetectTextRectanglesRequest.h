/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSString;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) _Bool detectDiacritics;
@property (nonatomic) _Bool minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;
@property (nonatomic) _Bool reportCharacterBoxes;

+ (void)initialize;
+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;

@end
