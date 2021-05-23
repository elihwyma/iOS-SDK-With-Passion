/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView

{
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id _pendingAttributedString;
    unsigned long long _pendingDirection;
    _Bool _pendingPushPerCharacter;
    double _currentAnimationFinishTime;
}

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(_Bool)arg2;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (void)_layoutForPushStartWithDirection:(unsigned long long)arg1;
- (void)_processPendingStringIfNeeded;
- (void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(_Bool)arg3;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (void)sizeToFitAttributedText:(id)arg1;
- (void)setAttributedTextUnanimated:(id)arg1;
- (id)currentAttributedText;

@end
