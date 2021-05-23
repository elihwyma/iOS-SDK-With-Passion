/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface TIMecabraEnvironmentContextWrapper : NSObject

{
    int _textContentType;
    int _shuangpinType;
    NSString *_appContext;
    unsigned long long _candidateIndex;
    unsigned long long _candidateInternalIndex;
    unsigned long long _environmentCandidateCount;
    struct __Mecabra *_mecabraEngine;
    struct __MecabraContext *_mecabraContext;
    NSMutableArray *_temporaryCandidates;
    NSMutableArray *_environmentCandidates;
    NSDate *_lastAnalyzeInputDate;
}

@property (retain, nonatomic) NSMutableArray *environmentCandidates;
@property (nonatomic) struct __MecabraContext *mecabraContext;
@property (retain, nonatomic) NSDate *lastAnalyzeInputDate;
@property (copy, nonatomic) NSString *appContext;
@property (nonatomic) unsigned long long candidateIndex;
@property (nonatomic) unsigned long long candidateInternalIndex;
@property (nonatomic, readonly) NSArray *contextCandidates;
@property (nonatomic, readonly) NSArray *contextCandidateStrings;
@property (nonatomic, readonly) unsigned long long contextCandidateCount;
@property (nonatomic, readonly) NSArray *environmentCandidateStrings;
@property (nonatomic, readonly) unsigned long long environmentCandidateCount;
@property (nonatomic, readonly) NSArray *inlineCandidates;
@property (nonatomic, readonly) struct __Mecabra *mecabraEngine;
@property (retain, nonatomic) NSMutableArray *temporaryCandidates;
@property (nonatomic) int textContentType;
@property (nonatomic) int shuangpinType;

- (void)dealloc;
- (void)setKeyboardLayout:(id)arg1;
- (void)clearContext;
- (void)clearAll;
- (id)initWithMecabraEngine:(struct __Mecabra *)arg1 language:(int)arg2;
- (_Bool)analyzeString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)analyzeInput:(id)arg1 options:(unsigned long long)arg2;
- (void)commitPredictionCandidate:(void *)arg1;
- (void)setGeometryModel:(void *)arg1 modelData:(struct __CFArray *)arg2;
- (void)acceptInlineCandidates;
- (void)partiallyCommitInlineCandidate:(void *)arg1;
- (void)completelyCommitInlineCandidate:(void *)arg1;
- (void)revertInlineCandidate;
- (void)declareEndOfSentence;
- (void)addContextCandidate:(void *)arg1 accept:(_Bool)arg2;
- (void)addContextStringCandidate:(void *)arg1;
- (void)addEnvironmentCandidate:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)clearInline;
- (void)removeCandidatesInRange:(struct _NSRange)arg1;
- (void)revertLearningForCandidate:(void *)arg1;
- (void)syncEnvironmentAndContextCandidates;
- (id)contextString:(id)arg1 forRightContext:(_Bool)arg2;
- (_Bool)predictionCandidatesWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (void *)createMecabraCandidateFromString:(id)arg1;

@end
