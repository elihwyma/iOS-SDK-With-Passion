/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICSearchRankingComparison, NSArray, NSAttributedString, NSRegularExpression, NSString, NSTextCheckingResult, NSValue;

@protocol ICSearchIndexable;

@interface ICSearchResult : NSObject

{
    unsigned long long _cachedHash;
    _Bool _isSubstringMatch;
    _Bool _displayingParticipantMatch;
    id <ICSearchIndexable> _object;
    double _rankingScore;
    unsigned long long _relevanceBitField;
    unsigned long long _matchedField;
    NSString *_searchString;
    NSString *_highlightString;
    NSValue *_firstSeenRangeInNote;
    NSString *_foundMatchedString;
    NSString *_displayingTitle;
    NSTextCheckingResult *_displayingTitleCheckingResult;
    NSAttributedString *_titleAttributedString;
    NSString *_displayingSnippet;
    NSTextCheckingResult *_displayingSnippetCheckingResult;
    NSAttributedString *_snippetAttributedString;
    ICSearchRankingComparison *_rankComparison;
    id <ICSearchIndexable> _currentContextObject;
    NSRegularExpression *_highlightPatternRegex;
    struct CGRect _titleAttributedStringInsideFrame;
    struct CGRect _snippetAttributedStringInsideFrame;
}

@property (retain, nonatomic) id <ICSearchIndexable> currentContextObject;
@property (retain, nonatomic) NSAttributedString *titleAttributedString;
@property (nonatomic) struct CGRect titleAttributedStringInsideFrame;
@property (retain, nonatomic) NSAttributedString *snippetAttributedString;
@property (nonatomic) struct CGRect snippetAttributedStringInsideFrame;
@property (nonatomic) _Bool displayingParticipantMatch;
@property (retain, nonatomic) NSValue *firstSeenRangeInNote;
@property (retain, nonatomic) NSString *foundMatchedString;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (nonatomic, readonly) id <ICSearchIndexable> object;
@property (nonatomic, readonly) double rankingScore;
@property (nonatomic, readonly) unsigned long long relevanceBitField;
@property (nonatomic, readonly) unsigned long long matchedField;
@property (copy, nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) NSString *highlightString;
@property (nonatomic, readonly) NSArray *csEvaluatorMatches;
@property (nonatomic, readonly) _Bool isSubstringMatch;
@property (nonatomic, readonly) NSString *displayingTitle;
@property (nonatomic, readonly) NSTextCheckingResult *displayingTitleCheckingResult;
@property (nonatomic, readonly) NSString *displayingSnippet;
@property (nonatomic, readonly) NSTextCheckingResult *displayingSnippetCheckingResult;
@property (retain, nonatomic) ICSearchRankingComparison *rankComparison;

+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 textCheckingResult:(id *)arg3;
+ (id)regularExpressionMatchOfString:(id)arg1 inContent:(id)arg2 matchWordBoundaries:(_Bool)arg3;
+ (id)regularExpressionForSearchString:(id)arg1 matchWordBoundaries:(_Bool)arg2;
+ (id)tokensInString:(id)arg1;
+ (id)matchOfString:(id)arg1 inContent:(id)arg2 isSubstringMatch:(_Bool)arg3;
+ (struct CGRect)boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize)arg2;
+ (id)attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(struct UIColor *)arg2;
+ (_Bool)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(_Bool)arg3 insideFrame:(struct CGRect)arg4 centered:(_Bool)arg5;
+ (id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 highlightColor:(struct UIColor *)arg4 insideFrame:(struct CGRect)arg5 centered:(_Bool)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 matchedField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6 isSubstringMatch:(_Bool)arg7;
- (void)prepareDisplayingTitleWithAccessingObject:(id)arg1;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)arg1;
- (id)matchInTextContent:(id)arg1;
- (id)firstRangeValueInNoteForMatchString:(id)arg1 textCheckingResult:(id)arg2;
- (id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 matchedField:(unsigned long long)arg5 searchString:(id)arg6 highlightString:(id)arg7 isSubstringMatch:(_Bool)arg8;
- (void)refreshDisplayTitle;
- (void)refreshDisplaySnippet;
- (long long)compareByModificationDate:(id)arg1;
- (void)refetchObjectFromContext:(id)arg1;
- (id)attributedTitleWithBaseAttributes:(id)arg1 highlightColor:(struct UIColor *)arg2 insideFrame:(struct CGRect)arg3;
- (id)snippetWithBaseAttributes:(id)arg1 highlightColor:(struct UIColor *)arg2 insideFrame:(struct CGRect)arg3;

@end
