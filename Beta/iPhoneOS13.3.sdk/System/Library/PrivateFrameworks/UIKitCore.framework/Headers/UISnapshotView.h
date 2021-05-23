/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, UIColor, UIImageView;

@interface UISnapshotView : UIView

{
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentBeyondBounds;
    struct UIEdgeInsets _edgePadding;
    struct UIEdgeInsets _edgeInsets;
    struct CGPoint _contentOffset;
    UIColor *_edgePaddingColor;
    UIView *_imageView;
    NSMutableArray *_edgePaddingViews;
    struct CGRect _snapshotRect;
    UIImageView *_shadowView;
    unsigned int _disableEdgeAntialiasing:1;
    unsigned int _disableVerticalStretch:1;
}

@property (nonatomic) struct UIEdgeInsets edgePadding;
@property (retain, nonatomic) UIColor *edgePaddingColor;
@property (nonatomic, readonly, getter=_snapshotView) UIView *snapshotView;
@property (nonatomic, readonly, getter=_contentSize) struct CGSize contentSize;
@property (nonatomic, getter=_contentOffset, setter=_setContentOffset:) struct CGPoint contentOffset;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic, getter=isVerticalStretchEnabled) _Bool verticalStretchEnabled;
@property (nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) struct CGRect snapshotRect;
@property (retain, nonatomic) UIView *shadowView;
@property (nonatomic, getter=isEdgeAntialiasingEnabled) _Bool edgeAntialiasingEnabled;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2;
- (void)captureSnapshotRect:(struct CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3;
- (void)_positionImageView;
- (void)setContentStretch:(struct CGRect)arg1;
- (struct UIEdgeInsets)_edgePadding;
- (void)_updateContentsRect;
- (void)_addEdgePaddingViewInRect:(struct CGRect)arg1;
- (void)_drawEdges:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;
- (struct CGRect)_contentsCenterForEdgePadding:(struct UIEdgeInsets)arg1 withContentSize:(struct CGSize)arg2;

@end
