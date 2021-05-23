/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, NotesTextureBackgroundView, NotesTextureView;

@protocol ICAccessibilityChildReparentingController, ICAccessibilityChildReparentingProvider;

@interface NotesBackgroundView : UIView

{
    _Bool _contentViewVisible;
    _Bool _topViewVisible;
    _Bool _textureViewVisible;
    UIView *_contentView;
    id <ICAccessibilityChildReparentingController> _axChildReparentingController;
    NotesTextureBackgroundView *_textureView;
    NotesTextureBackgroundView *_topTextureView;
    NotesTextureBackgroundView *_bottomTextureView;
    NotesTextureBackgroundView *_bottomSafeAreaTextureView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    id <ICAccessibilityChildReparentingProvider> _elementForAccessibilityReparenting;
}

@property (retain, nonatomic) NotesTextureBackgroundView *textureView;
@property (retain, nonatomic) NotesTextureBackgroundView *topTextureView;
@property (retain, nonatomic) NotesTextureBackgroundView *bottomTextureView;
@property (retain, nonatomic) NotesTextureBackgroundView *bottomSafeAreaTextureView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (weak, nonatomic) id <ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContentViewVisible) _Bool contentViewVisible;
@property (nonatomic, getter=isTopViewVisible) _Bool topViewVisible;
@property (nonatomic, getter=isTextureViewVisible) _Bool textureViewVisible;
@property (nonatomic, readonly) NotesTextureView *backgroundView;
@property (weak, nonatomic) id <ICAccessibilityChildReparentingController> axChildReparentingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityElements;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)_accessibilityIsScannerGroup;
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint)arg2;
- (id)scrollViewDescendantOfView:(id)arg1;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(_Bool)arg2;
- (void)setContentView:(id)arg1 useReadableLayoutGuide:(_Bool)arg2 topMargin:(double)arg3;
- (void)reparentAccessibilityChildrenOfElement:(id)arg1;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3;
- (void)updateConstraintsForBottomToolbar:(id)arg1;
- (void)fadeOutBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2;
- (void)fadeInBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2;
- (void)setBottomToolbarVisible:(_Bool)arg1;
- (void)snapshotContentIntoSnapshotView:(id)arg1;
- (void)setupContentViewHomeIndicatorAvoidanceWithSize:(double)arg1;
- (void)addSubviewAboveAllViews:(id)arg1;

@end
