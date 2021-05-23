/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHDrawing, CHRecognitionInsightRequest, CHTokenizedTextResult, NSArray, NSCharacterSet, NSDictionary, NSError, NSLocale, NSString;

@interface CHRecognitionInsight : NSObject

{
    int _recognizerRecognitionMode;
    int _recognizerContentType;
    CHRecognitionInsightRequest *_insightRequest;
    NSLocale *_recognizerLocale;
    NSCharacterSet *_recognizerActiveCharacterSet;
    NSDictionary *_recognizerOptions;
    unsigned long long _recognizerMaxRecognitionResultCount;
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSArray *_spaceProbabilities;
    NSArray *_charBoundaryProbabilities;
    NSArray *_delayedStrokeProbabilities;
    CHTokenizedTextResult *_textResult;
    NSError *_recognitionError;
    struct CGSize _recognizerMinimumDrawingSize;
}

@property (retain, nonatomic) CHRecognitionInsightRequest *insightRequest;
@property (copy, nonatomic) NSLocale *recognizerLocale;
@property (nonatomic) int recognizerRecognitionMode;
@property (nonatomic) int recognizerContentType;
@property (copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet;
@property (copy, nonatomic) NSDictionary *recognizerOptions;
@property (nonatomic) unsigned long long recognizerMaxRecognitionResultCount;
@property (nonatomic) struct CGSize recognizerMinimumDrawingSize;
@property (copy, nonatomic) CHDrawing *inputDrawing;
@property (copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (copy, nonatomic) NSArray *spaceProbabilities;
@property (copy, nonatomic) NSArray *charBoundaryProbabilities;
@property (copy, nonatomic) NSArray *delayedStrokeProbabilities;
@property (copy, nonatomic) CHTokenizedTextResult *textResult;
@property (copy, nonatomic) NSError *recognitionError;
@property (nonatomic, readonly) NSString *recognizerRecognitionModeDescription;
@property (nonatomic, readonly) NSString *recognizerContentTypeDescription;

- (void)dealloc;
- (id)description;
- (void)recordSpaceProbabilities:(const vector_8f06c10f *)arg1;
- (void)recordCharBoundaryProbabilities:(const vector_8f06c10f *)arg1;
- (void)recordDelayedStrokeProbabilities:(const vector_8f06c10f *)arg1;
- (void)recordConfigurationForRecognizer:(id)arg1 options:(id)arg2;
- (void)recordInputDrawing:(id)arg1;
- (void)recordInputDrawingCutPoints:(id)arg1;
- (void)recordTextResult:(id)arg1 recognitionError:(id)arg2;
- (void)recordInsightRequest:(id)arg1;

@end
