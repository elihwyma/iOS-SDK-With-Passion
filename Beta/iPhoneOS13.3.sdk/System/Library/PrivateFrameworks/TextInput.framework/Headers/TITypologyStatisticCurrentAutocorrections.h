/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyStatistic.h>

@class TIAutocorrectionList, TICandidateRequestToken;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic

{
    TIAutocorrectionList *_autocorrections;
    TICandidateRequestToken *_requestToken;
}

@property (retain, nonatomic) TIAutocorrectionList *autocorrections;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;

- (void)visitRecordAutocorrections:(id)arg1;

@end
