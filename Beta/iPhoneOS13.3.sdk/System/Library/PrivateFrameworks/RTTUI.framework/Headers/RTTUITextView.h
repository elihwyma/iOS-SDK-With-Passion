/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <UIKit/UITextView.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface RTTUITextView : UITextView

{
    long long _leftIndex;
    struct CGPoint _panContentOffset;
    double _currentKeyboardWidth;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_leftBackgroundColorEdge;
    UIView *_rightBackgroundColorEdge;
    UIView *_middleBackgroundColorEdge;
    UIView *_inputAccessoryPlaceholderView;
    UIView *_iPadBufferView;
    _Bool _showTTYPredictions;
    _Bool _isHandlingKeyboardFrameChanged;
    NSArray *_ttyAbbreviations;
    UICollectionView *_predictionsCollectionView;
}

@property (retain, nonatomic) UICollectionView *predictionsCollectionView;
@property (nonatomic) _Bool isHandlingKeyboardFrameChanged;
@property (nonatomic) _Bool showTTYPredictions;
@property (retain, nonatomic) NSArray *ttyAbbreviations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)inputAccessoryView;
- (long long)keyboardAppearance;
- (_Bool)disableInputBars;
- (void)_keyboardDidHide:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)keyCommands;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (_Bool)_accessibilityIsRealtimeElement;
- (void)updateTTYBar;
- (void)overrideTTYPredictionsHidden:(_Bool)arg1;
- (double)ttyBarHeight;
- (void)_kbFrameChanged:(id)arg1;
- (void)_loadTTYAbbreviations;
- (float)_predictionsCellHeight;
- (void)_didPanPredictions:(id)arg1;
- (float)_predictionsCellBuffer;
- (void)_updateBlackBarPositioning;
- (void)_tapTTYBarCell:(id)arg1;
- (void)_updateTTYBarPosition;
- (int)_predictionsPerPage;
- (void)_resetTTYBarPosition;
- (_Bool)_isKeyboardPredictionsEnabled;
- (void)_insertWhitespaceIfNeeded;
- (void)_didSwipeLeft:(id)arg1;

@end
