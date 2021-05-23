/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputCore/TIWordSearch.h>

@interface TIWordSearchShapeBased : TIWordSearch

- (_Bool)canHandleKeyHitTest;
- (void)updateMecabraState;
- (id)autoconvertLongestValidPrefixes:(id)arg1 option:(unsigned long long)arg2 candidateResultSet:(id)arg3 autoconvertedCandidateArray:(id *)arg4;
- (_Bool)addTopCandidateForCode:(id)arg1 option:(unsigned long long)arg2 autoconvertedCandidates:(id)arg3 candidateRefsDictionary:(id)arg4;
- (_Bool)validateCode:(id)arg1 withOption:(unsigned long long)arg2;

@end
