/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSDictionary, NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections

{
    NSMutableDictionary *_histogram;
    long long _lengthOfSelectedCandidates;
    long long _lengthOfSelectedPredictions;
}

@property (nonatomic, readonly) NSDictionary *histogram;
@property (nonatomic, readonly) long long lengthOfSelectedCandidates;
@property (nonatomic, readonly) long long lengthOfSelectedPredictions;

- (id)init;
- (void)visitRecordKeyboardInput:(id)arg1;
- (id)structuredReport;
- (unsigned long long)rankOfCandidate:(id)arg1;
- (void)addLengthOfSelectedCandidate:(id)arg1;
- (void)addLengthOfSelectedPrediction:(id)arg1;
- (void)countSelectedAutocorrection:(id)arg1;
- (void)countSelectedInputString;
- (void)countSelectedInputStringToRejectAutocorrection;
- (_Bool)isCandidatePrediction:(id)arg1;
- (void)countSelectedPrediction:(id)arg1 withRank:(unsigned long long)arg2;
- (void)countSelectedCandidate:(id)arg1 withRank:(unsigned long long)arg2;
- (void)rankAndCountSelectedCandidate:(id)arg1;

@end
