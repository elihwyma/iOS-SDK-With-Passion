//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView
{
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id _pendingAttributedString;
    NSUInteger _pendingDirection;
    BOOL _pendingPushPerCharacter;
    double _currentAnimationFinishTime;
}

// - (void).cxx_destruct;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2;
- (void)_layoutViewsAtIndex:(NSUInteger)arg1 forPushEndWithDirection:(NSUInteger)arg2;
- (void)_layoutForPushStartWithDirection:(NSUInteger)arg1;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (id)currentAttributedText;
- (void)_processPendingStringIfNeeded;
- (void)pushToAttributedText:(id)arg1 direction:(NSUInteger)arg2 perCharacter:(BOOL)arg3;
- (void)setAttributedTextUnanimated:(id)arg1;
- (void)sizeToFitAttributedText:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

