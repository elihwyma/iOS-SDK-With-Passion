/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TILRUDictionary, TIRevisionHistoryToken;

@protocol TIRevisionHistoryDelegate;

@interface TIRevisionHistory : NSObject

{
    _Bool _shouldReportRevisionToDP;
    _Bool _isDeletingBackwards;
    _Bool _isRapidDeleteActive;
    id <TIRevisionHistoryDelegate> _delegate;
    TILRUDictionary *_recentAutocorrections;
    NSString *_documentText;
    NSMutableArray *_tokenization;
    void *_tokenizer;
    TIRevisionHistoryToken *_lastRejectedToken;
    struct _NSRange _selectedRange;
    struct _TIRevisionHistoryTokenIterator _currentTokenIterator;
}

@property (copy, nonatomic) NSString *documentText;
@property (nonatomic, readonly) NSMutableArray *tokenization;
@property (nonatomic) struct _NSRange selectedRange;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator currentTokenIterator;
@property (nonatomic, readonly) void *tokenizer;
@property (retain, nonatomic) TIRevisionHistoryToken *lastRejectedToken;
@property (nonatomic) _Bool shouldReportRevisionToDP;
@property (nonatomic) _Bool isDeletingBackwards;
@property (nonatomic) _Bool isRapidDeleteActive;
@property (nonatomic) id <TIRevisionHistoryDelegate> delegate;
@property (retain, nonatomic) TILRUDictionary *recentAutocorrections;

+ (id)documentStateTrimmedToSentenceForState:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)documentState;
- (void)acceptToken:(id)arg1 withContext:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 saveToDifferentialPrivacy:(int)arg4;
- (void)rejectToken:(id)arg1 withContext:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 negativeLearningHint:(int)arg4 withRevisedToken:(id)arg5;
- (unsigned long long)fillTokenBuffer:(struct TITokenID *)arg1 withContextForTokenAtIndex:(unsigned long long)arg2;
- (void)acceptTokensInRange:(struct _NSRange)arg1;
- (void)rejectTokensInRange:(struct _NSRange)arg1 negativeLearningHint:(int)arg2 newRevision:(id)arg3;
- (void)migrateUserTypingFromDeletedTokens:(id)arg1 toInsertedTokens:(id)arg2 withUsageLearningMask:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)arg1;
- (id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _NSRange)documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _TIRevisionHistoryTokenIterator)nextTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _TIRevisionHistoryTokenIterator)previousTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (struct _NSRange)selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (id)nonEmptyTokensInRange:(struct _NSRange)arg1;
- (struct _TIRevisionHistoryTokenIterator)popSelectedTextFromTokenizer;
- (unsigned long long)tokenizeDocumentTextInRange:(struct _NSRange)arg1 withTokenHandler:(CDUnknownBlockType)arg2;
- (void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange)arg1 withDeletedCharacterCount:(unsigned long long)arg2;
- (_Bool)originalIterator:(struct _TIRevisionHistoryTokenIterator)arg1 matchesRevisedDocumentRange:(struct _NSRange)arg2 andTokenID:(struct TITokenID)arg3;
- (_Bool)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator)arg1 withRevisedDocumentRange:(struct _NSRange)arg2 forRevision:(id)arg3;
- (struct _TIRevisionHistoryTokenIterator)resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator)arg1 withRange:(struct _NSRange)arg2 fromDocumentLocation:(unsigned long long)arg3;
- (_Bool)validateTokenizationForRevisedDocumentRange:(struct _NSRange)arg1 andTokenID:(struct TITokenID)arg2 forRevision:(id)arg3;
- (void)addRevisedTokenString:(id)arg1 withTokenID:(struct TITokenID)arg2 inDocumentRange:(struct _NSRange)arg3 toRevision:(id)arg4;
- (void)handleRevisedTokenString:(id)arg1 withTokenID:(struct TITokenID)arg2 forRevision:(id)arg3;
- (void)pushSelectedTextToTokenizerForRevision:(id)arg1;
- (void)mergeTokenizationsForRevision:(id)arg1;
- (void)replaceSelectionWithText:(id)arg1 negativeLearningHint:(int)arg2 selectedTokenReplacementHandler:(CDUnknownBlockType)arg3;
- (void)annotateTokensCreatedFromDocumentState;
- (void)resetToDocumentState:(id)arg1;
- (struct _TIRevisionHistoryTokenIterator)iteratorUpperBoundForSelectionStart;
- (void)enumerateSentenceStemUsingIteratorBlock:(CDUnknownBlockType)arg1;
- (_Bool)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator)arg1;
- (_Bool)isWordToken:(struct _TIRevisionHistoryTokenIterator)arg1;
- (id)wordTokenContainingSelection;
- (struct _NSRange)deletionRangeToObtainDocumentState:(id)arg1;
- (void)rejectCandidate:(id)arg1 forInput:(id)arg2;
- (struct _NSRange)inputRangeForReplacement:(id)arg1;
- (void)acceptText:(id)arg1 isAutoshifted:(_Bool)arg2;
- (void)acceptCurrentSentence;
- (_Bool)matchesContextBeforeSelection:(id)arg1;
- (_Bool)matchesSelectedText:(id)arg1;
- (_Bool)matchesContextAfterSelection:(id)arg1;
- (_Bool)matchesDocumentState:(id)arg1;
- (void)syncToDocumentState:(id)arg1;
- (void)enumerateSentenceStemUsingBlock:(CDUnknownBlockType)arg1;
- (id)currentWord;
- (id)currentUserTyping;

@end
