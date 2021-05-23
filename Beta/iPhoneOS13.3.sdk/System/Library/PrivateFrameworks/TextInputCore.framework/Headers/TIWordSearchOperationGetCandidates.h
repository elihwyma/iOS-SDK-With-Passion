/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class MCAcceptCandidateInput, MCKeyboardInput, NSArray, NSString, TIKeyboardCandidate, TIMecabraIMLogger, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation

{
    _Bool _predictionEnabled;
    _Bool _reanalysisMode;
    _Bool _hardwareKeyboardMode;
    NSString *_inputString;
    MCKeyboardInput *_keyboardInput;
    MCAcceptCandidateInput *_lastAcceptCandidateInput;
    TIWordSearchCandidateResultSet *_results;
    id _target;
    SEL _action;
    unsigned long long _segmentBreakIndex;
    unsigned long long _autocapitalizationType;
    NSArray *_geometryModelData;
    TIMecabraIMLogger *_logger;
    TIKeyboardCandidate *_candidateAfterSegmentBreak;
    TIWordSearch *_wordSearch;
}

@property (retain) TIWordSearch *wordSearch;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *results;
@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) MCKeyboardInput *keyboardInput;
@property (nonatomic, readonly) MCAcceptCandidateInput *lastAcceptCandidateInput;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;
@property (nonatomic) unsigned long long segmentBreakIndex;
@property (nonatomic, readonly) _Bool predictionEnabled;
@property (nonatomic, readonly) _Bool reanalysisMode;
@property (nonatomic, readonly) unsigned long long autocapitalizationType;
@property (nonatomic, readonly) NSArray *geometryModelData;
@property (nonatomic, readonly) _Bool hardwareKeyboardMode;
@property (nonatomic, readonly) TIMecabraIMLogger *logger;
@property (retain, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak;

- (void)dealloc;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 predictionEnabled:(_Bool)arg5 reanalysisMode:(_Bool)arg6 autocapitalizationType:(unsigned long long)arg7 target:(id)arg8 action:(SEL)arg9 geometryModelData:(id)arg10 hardwareKeyboardMode:(_Bool)arg11 logger:(id)arg12;
- (void)checkForCachedResults;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;

@end
