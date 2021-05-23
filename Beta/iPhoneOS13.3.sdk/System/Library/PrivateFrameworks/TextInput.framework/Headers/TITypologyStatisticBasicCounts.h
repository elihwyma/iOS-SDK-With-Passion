/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableArray, NSMutableString;

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections

{
    _Bool _backspacedIntoAutocorrection;
    long long _touchCount;
    long long _characterCount;
    long long _predictedCharacterCount;
    long long _backspaceCount;
    long long _autocorrectionCount;
    long long _rejectedCandidateCount;
    long long _backspaceIntoAutocorrectionCount;
    long long _predictiveSelectionCount;
    long long _falseBackspaceCount;
    long long _falseBackspaceIntoAutocorrectionCount;
    NSMutableString *_recentText;
    NSMutableArray *_recentAutocorrectionLocations;
    NSMutableString *_recentTextBeforeBackspace;
    NSMutableString *_recentTextAfterBackspace;
}

@property (nonatomic, readonly) NSMutableString *recentText;
@property (nonatomic, readonly) NSMutableArray *recentAutocorrectionLocations;
@property (nonatomic, readonly) NSMutableString *recentTextBeforeBackspace;
@property (nonatomic, readonly) NSMutableString *recentTextAfterBackspace;
@property (nonatomic) _Bool backspacedIntoAutocorrection;
@property (nonatomic, readonly) long long touchCount;
@property (nonatomic, readonly) long long characterCount;
@property (nonatomic, readonly) long long predictedCharacterCount;
@property (nonatomic, readonly) long long backspaceCount;
@property (nonatomic, readonly) long long autocorrectionCount;
@property (nonatomic, readonly) long long rejectedCandidateCount;
@property (nonatomic, readonly) long long backspaceIntoAutocorrectionCount;
@property (nonatomic, readonly) long long predictiveSelectionCount;
@property (nonatomic, readonly) long long falseBackspaceCount;
@property (nonatomic, readonly) long long falseBackspaceIntoAutocorrectionCount;

- (id)init;
- (void)visitRecordSync:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;
- (void)visitRecordCandidateRejected:(id)arg1;
- (id)structuredReport;
- (id)aggregateReport;
- (void)handleTouch:(id)arg1;
- (void)updateTextWithAcceptedCandidate:(id)arg1;

@end
