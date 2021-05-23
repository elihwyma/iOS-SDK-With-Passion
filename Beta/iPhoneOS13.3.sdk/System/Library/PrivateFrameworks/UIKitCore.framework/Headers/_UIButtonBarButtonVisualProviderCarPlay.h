/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class NSArray, NSLayoutConstraint, NSMutableDictionary, UIImageView, UILabel, UIView;

@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProviderCarPlay : _UIButtonBarButtonVisualProvider

{
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIView *_focusedView;
    UIImageView *_backView;
    UIImageView *_imageView;
    UILabel *_titleView;
    NSArray *_titleAlternatives;
    NSMutableDictionary *_titleAlterntativeLookup;
    NSArray *_buttonConstraints;
    NSLayoutConstraint *_maxTitleViewWidthConstraint;
    NSLayoutConstraint *_backViewToContentConstraint;
}

@property (weak, nonatomic) id <_UIButtonBarAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) UIView *focusedView;
@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) NSArray *titleAlternatives;
@property (retain, nonatomic) NSMutableDictionary *titleAlterntativeLookup;
@property (retain, nonatomic) NSArray *buttonConstraints;
@property (retain, nonatomic) NSLayoutConstraint *maxTitleViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *backViewToContentConstraint;

- (id)contentView;
- (_Bool)supportsBackButtons;
- (id)backIndicatorView;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forFocusedState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)_setupAlternateTitlesFromBarButtonItem:(id)arg1;
- (void)_selectGestureChanged:(id)arg1;
- (id)_titleAlternativeForTitle:(id)arg1;

@end
