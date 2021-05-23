/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, PKDrawing;

@interface PKAttachmentView : UIView

{
    _Bool _contentHidden;
    PKDrawing *_drawing;
    NSMutableDictionary *_tiles;
    NSMutableDictionary *_offscreenTiles;
    NSArray *_additionalStrokes;
    UIView *_tileContainerView;
}

@property (copy, nonatomic) PKDrawing *drawing;
@property (nonatomic, readonly) NSMutableDictionary *tiles;
@property (nonatomic, readonly) NSMutableDictionary *offscreenTiles;
@property (retain, nonatomic) NSArray *additionalStrokes;
@property (retain, nonatomic) UIView *tileContainerView;
@property (nonatomic, readonly) UIView *tileMaskView;
@property (nonatomic, readonly) _Bool isAtEndOfDocument;
@property (nonatomic) _Bool contentHidden;
@property (nonatomic, readonly) double drawingScale;

- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)fingerDrawingEnabledDidChange;
- (void)drawingWillBegin;
- (void)drawingDidEraseStrokes;
- (void)drawingDidChange;
- (void)updateDrawingHeight:(double)arg1;
- (void)updateFrameForTextContainer;
- (void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2;
- (_Bool)hitByTouchLocation:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;
- (_Bool)hitChrome:(struct CGPoint)arg1 isStylus:(_Bool)arg2;
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(_Bool)arg2;
- (_Bool)wantsFullyRendered;
- (void)fullyRendered;
- (_Bool)disableTileAnimations;
- (void)updateTileContainerViewFrame;
- (id)initWithFrame:(struct CGRect)arg1 drawing:(id)arg2;

@end
