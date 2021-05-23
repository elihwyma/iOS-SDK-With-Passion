/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSArray, NSString;

@interface VNRecognizeTextRequest : VNImageBasedRequest

{
    _Bool indeterminate;
    CDUnknownBlockType progressHandler;
}

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) _Bool usesLanguageCorrection;
@property (nonatomic) float minimumTextHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (readonly) _Bool indeterminate;

+ (Class)configurationClass;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id *)arg3;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)hasCancellationHook;
- (_Bool)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;

@end
