/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives, _UIDynamicCaretHelpLabel, _UIDynamicCaretInput, _UIDynamicCaretNoContentView;

@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIDynamicCaret : UIImageView <Swift>

{
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    _Bool _justDeleted;
    _UIDynamicCaretInput *_inputView;
    _UIDynamicCaretAlternatives *_alternativesView;
    _UIDynamicCaretNoContentView *_noContentView;
    _UIDynamicCaretHelpLabel *_helpLabel;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property (retain, nonatomic) _UIDynamicCaretInput *inputView;
@property (retain, nonatomic) _UIDynamicCaretAlternatives *alternativesView;
@property (retain, nonatomic) _UIDynamicCaretNoContentView *noContentView;
@property (retain, nonatomic) _UIDynamicCaretHelpLabel *helpLabel;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) _Bool isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)backgroundImage;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (_Bool)hasCandidates;
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)showCandidate:(id)arg1;
- (_Bool)isExtendedList;
- (_Bool)isFloatingList;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)keyboardBehaviors;
- (id)statisticsIdentifier;
- (unsigned long long)selectedSortIndex;
- (_Bool)isDeleteCandidate:(id)arg1;
- (void)displayAlternatives:(_Bool)arg1;
- (void)setDocumentHasContent:(_Bool)arg1;
- (void)alternativeTappedAtIndex:(long long)arg1;

@end
