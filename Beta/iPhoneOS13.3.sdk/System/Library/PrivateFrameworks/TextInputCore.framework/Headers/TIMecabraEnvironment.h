/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TIMecabraEnvironmentContextWrapper;

@interface TIMecabraEnvironment : NSObject

{
    _Bool _shouldAdjustOnAnalyze;
    NSString *_leftDocumentContext;
    NSString *_rightDocumentContext;
    TIMecabraEnvironmentContextWrapper *_mecabraContextWrapper;
    NSMutableArray *_candidatesLeftOfCaret;
    NSMutableArray *_candidatesRightOfCaret;
    NSString *_leftDocumentContextCorrespondingToCandidates;
    NSString *_rightDocumentContextCorrespondingToCandidates;
    NSMutableArray *_candidatesToDelete;
    struct _NSRange _leftDocumentContextCorrespondingToCandidatesRange;
    struct _NSRange _rightDocumentContextCorrespondingToCandidatesRange;
}

@property (retain, nonatomic) TIMecabraEnvironmentContextWrapper *mecabraContextWrapper;
@property (nonatomic) _Bool shouldAdjustOnAnalyze;
@property (retain, nonatomic) NSMutableArray *candidatesLeftOfCaret;
@property (retain, nonatomic) NSMutableArray *candidatesRightOfCaret;
@property (copy, nonatomic) NSString *leftDocumentContextCorrespondingToCandidates;
@property (copy, nonatomic) NSString *rightDocumentContextCorrespondingToCandidates;
@property (nonatomic) struct _NSRange leftDocumentContextCorrespondingToCandidatesRange;
@property (nonatomic) struct _NSRange rightDocumentContextCorrespondingToCandidatesRange;
@property (retain, nonatomic) NSMutableArray *candidatesToDelete;
@property (nonatomic, readonly) NSArray *contextCandidateSurfaces;
@property (nonatomic, readonly) NSArray *inlineCandidateSurfaces;
@property (nonatomic, readonly) NSArray *rightCandidateSurfaces;
@property (copy, nonatomic) NSString *leftDocumentContext;
@property (copy, nonatomic) NSString *rightDocumentContext;
@property (nonatomic) int textContentType;
@property (nonatomic, readonly) struct __Mecabra *mecabra;
@property (nonatomic, readonly) NSDictionary *environmentDebuggingInformation;

+ (id)baseLayout;
+ (int)maxNumberOfDrawSamples;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra *)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForCHRecognizer:(id)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4;
+ (void)removeMobileAssetListener:(id)arg1;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 inMecabra:(struct __Mecabra *)arg2 onQueue:(id)arg3;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 onQueue:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 inMecabra:(struct __Mecabra *)arg3 onQueue:(id)arg4;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 onQueue:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;

- (void)reset;
- (void)setKeyboardLayout:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setLeftDocumentContextInternal:(id)arg1;
- (unsigned long long)candidateIndex;
- (void)setCandidateIndex:(long long)arg1;
- (_Bool)documentContextIsEmpty;
- (void)updateCursorPosition;
- (void)analyzeCandidateContextWithSplit:(_Bool)arg1;
- (void)revertLearningOfCandidateIfNecessary;
- (void)addCandidateWithString:(id)arg1 toArray:(id)arg2;
- (void)insertCandidateWithString:(id)arg1 intoArray:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)createNewCandidatesFromDocumentContext;
- (_Bool)addNewCandidatesIfNecessary:(long long)arg1;
- (void)compareDocumentAndEnvironmentCandidates;
- (void)adjustEnvironment:(long long)arg1;
- (id)initWithMecabraEngine:(struct __Mecabra *)arg1 language:(int)arg2;
- (_Bool)analyzeString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)analyzeInput:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)predictionAnalyzeWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (void)commitPredictionCandidate:(void *)arg1;
- (void)setGeometryModel:(void *)arg1 modelData:(struct __CFArray *)arg2;
- (void)addStringCandidateToContextInternal:(id)arg1;
- (void)setShuangpinType:(int)arg1;
- (void)acceptInlineCandidates;
- (void)partiallyCommitInlineCandidate:(void *)arg1;
- (void)completelyCommitInlineCandidate:(void *)arg1;
- (void)revertInlineCandidate;
- (void)adjustEnvironmentDirectly:(long long)arg1;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (void)addStringCandidateToContext:(id)arg1;
- (void)addPunctuationCandidateToContext:(id)arg1;
- (void)declareEndOfSentence;

@end
