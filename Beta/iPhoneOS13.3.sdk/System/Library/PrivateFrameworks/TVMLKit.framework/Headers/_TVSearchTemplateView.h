/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIFocusGuide, UIImageView, UISearchBar, UITapGestureRecognizer, _TVSearchBarWrapper;

@protocol UIFocusEnvironment, _TVSearchTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface _TVSearchTemplateView : UIView

{
    UIView *_keyboard;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
    _Bool _isTouchEnabled;
    _Bool _focusHidden;
    _Bool _partialViewEnabled;
    UIView *_fieldAndKeyboardContainer;
    _TVSearchBarWrapper *_searchBarWrapper;
    NSArray *_keyboardConstraints;
    id <UIFocusEnvironment> _preferredFocusEnvironment;
    UIView *_templateContainerView;
    UIFocusGuide *_keyboardProxy;
    NSArray *_keyboardProxyConstraints;
    UITapGestureRecognizer *_menuRecognizer;
    double _fieldOriginY;
    int _keyboardState;
    int _targetKeyboardState;
    struct {
        unsigned int hasWillAddKeyboard:1;
        unsigned int hasDidAddKeyboard:1;
        unsigned int hasWillRemoveKeyboard:1;
        unsigned int hasDidRemoveKeyboard:1;
        unsigned int hasDidOffsetOrigin:1;
    } _delegateFlags;
    _Bool _spinning;
    id <_TVSearchTemplateViewDelegate> _delegate;
    UIView *_bannerView;
    UIImageView *_bgImageView;
    struct UIEdgeInsets _collectionMargin;
}

@property (retain, nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) _Bool isTouchEnabled;
@property (weak, nonatomic) id <_TVSearchTemplateViewDelegate> delegate;
@property (retain, nonatomic) UIView *bannerView;
@property (nonatomic) struct UIEdgeInsets collectionMargin;
@property (nonatomic, getter=isFocusHidden) _Bool focusHidden;
@property (nonatomic, getter=isPartialViewEnabled) _Bool partialViewEnabled;
@property (nonatomic, readonly) UIImageView *bgImageView;
@property (nonatomic, getter=isSpinning) _Bool spinning;

- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;
- (void)stopEditing;
- (void)_handleMenuAction:(id)arg1;
- (void)_adjustKeyboardContainerPositionForContentOffset:(struct CGPoint)arg1;
- (_Bool)_isSearchFieldVisible;
- (void)_pushKeyboardTowardsStableState:(unsigned long long)arg1;
- (void)_transitionKeyboardInAnimated:(_Bool)arg1;
- (void)_transitionKeyboardOut;
- (void)_addKeyboard;
- (id)initWithCollectionView:(id)arg1 searchBar:(id)arg2 keyboard:(id)arg3 touchEnabled:(_Bool)arg4;
- (void)adjustScrollForContentOffset:(struct CGPoint)arg1;

@end
