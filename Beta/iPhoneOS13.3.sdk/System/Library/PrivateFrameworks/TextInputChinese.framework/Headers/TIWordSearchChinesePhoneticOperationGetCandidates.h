/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputCore/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates

{
    NSArray *_disambiguationCandidates;
    unsigned long long _selectedDisambiguationCandidateIndex;
}

@property (nonatomic, readonly) NSArray *disambiguationCandidates;
@property (nonatomic, readonly) unsigned long long selectedDisambiguationCandidateIndex;

- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 disambiguationCandidates:(id)arg5 selectedDisambiguationCandidateIndex:(unsigned long long)arg6 predictionEnabled:(_Bool)arg7 reanalysisMode:(_Bool)arg8 target:(id)arg9 action:(SEL)arg10 geometryModelData:(id)arg11 hardwareKeyboardMode:(_Bool)arg12 logger:(id)arg13;

@end
