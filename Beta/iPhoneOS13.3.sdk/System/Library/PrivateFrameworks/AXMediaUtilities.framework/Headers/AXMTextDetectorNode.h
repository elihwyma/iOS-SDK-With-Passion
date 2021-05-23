/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXMTextLayoutManager, NSArray;

@interface AXMTextDetectorNode : AXMEvaluationNode

{
    AXMTextLayoutManager *_textLayoutManager;
    NSArray *_recognitionLanguages;
    NSArray *_customWords;
}

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;
+ (id)supportedRecognitionLanguagesForFlavor:(unsigned long long)arg1 textRecognitionLevel:(unsigned long long)arg2 error:(id *)arg3;
+ (long long)_vnRequestTextRecognitionLevelForAXMTextRecognitionLevel:(unsigned long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (_Bool)shouldEvaluate:(id)arg1;
- (void)freeResources;
- (id)_visionTextDetectionOptionForLanguage:(id)arg1;
- (void)_evaluateByDetectingTextRectangles:(id)arg1 textDetectionOptions:(id)arg2;
- (void)_evaluateByRecognizingText:(id)arg1 textDetectionOptions:(id)arg2;

@end
