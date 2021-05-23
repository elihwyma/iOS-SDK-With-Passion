/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIResponder.h>

@class NSString, TIKeyboardCandidateResultSet;

@protocol UIKeyboardCandidateListDelegate;

@interface _UIKeyboardHandwritingLink : UIResponder

{
    UIResponder *_previousResponder;
    UIResponder *_fallbackResponder;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    _Bool _justDeleted;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)nextResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadInputViews;
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
- (void)performOutput:(id)arg1;
- (_Bool)shouldRestoreResponder;
- (void)candidateOutput:(id)arg1;
- (_Bool)isDeleteCandidate:(id)arg1;
- (void)candidatesUpdated;
- (void)sendStrokes:(id)arg1;

@end
