/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKPaletteButton, UIStackView;

@protocol PKPaletteUndoRedoViewDelegate;

@interface PKPaletteUndoRedoView : UIView

{
    _Bool _undoEnabled;
    _Bool _redoEnabled;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id <PKPaletteUndoRedoViewDelegate> _delegate;
    UIView *_contentView;
    UIStackView *_stackView;
    PKPaletteButton *_undoButton;
    PKPaletteButton *_redoButton;
    NSLayoutConstraint *_undoButtonWidthConstraint;
    NSLayoutConstraint *_undoButtonHeightConstraint;
    NSLayoutConstraint *_redoButtonWidthConstraint;
    NSLayoutConstraint *_redoButtonHeightConstraint;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteButton *undoButton;
@property (retain, nonatomic) PKPaletteButton *redoButton;
@property (retain, nonatomic) NSLayoutConstraint *undoButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoButtonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *redoButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *redoButtonHeightConstraint;
@property (weak, nonatomic) id <PKPaletteUndoRedoViewDelegate> delegate;
@property (nonatomic, getter=isUndoEnabled) _Bool undoEnabled;
@property (nonatomic, getter=isRedoEnabled) _Bool redoEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (struct CGSize)_buttonSize;
- (void)installStackView;
- (void)installUndoButton;
- (void)installRedoButton;
- (void)handleUndo:(id)arg1;
- (void)handleRedo:(id)arg1;

@end
