/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject

{
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
    NSArray *_inputStrokeIdentifiers;
    NSDictionary *_recognitionResultsByLocale;
    NSDictionary *_errorsByLocale;
}

@property (retain, nonatomic, readonly) CHDrawing *inputDrawing;
@property (copy, nonatomic, readonly) NSArray *inputDrawingCutPoints;
@property (copy, nonatomic, readonly) NSDictionary *languageFitnessByLocale;
@property (copy, nonatomic, readonly) NSArray *inputStrokeIdentifiers;
@property (copy, nonatomic, readonly) NSDictionary *recognitionResultsByLocale;
@property (copy, nonatomic, readonly) NSDictionary *errorsByLocale;

+ (id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2;
+ (id)filteredResultsByLocale:(id)arg1 usingLanguageFitness:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localesSortedByLanguageFitness:(id)arg1;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double *)arg2 doesContainUnfilteredMultiLocaleResults:(_Bool *)arg3;
- (double)languageFitnessForLocale:(id)arg1;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6;
- (id)initWithResultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4;

@end
