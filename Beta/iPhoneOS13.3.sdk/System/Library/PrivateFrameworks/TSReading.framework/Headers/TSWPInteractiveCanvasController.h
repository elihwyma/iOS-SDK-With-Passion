/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDInteractiveCanvasController.h>

@class NSString;

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController

{
    _Bool _isTearingDown;
}

@property (nonatomic, readonly) _Bool shouldRespondToTextHyperlinks;
@property (nonatomic, readonly) _Bool handleHyperlinksWithTextGRs;
@property (nonatomic, readonly) _Bool isEditingText;
@property (nonatomic, readonly) _Bool isTearingDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)teardown;
- (_Bool)handleGesture:(id)arg1;
- (id)beginEditingRepForInfo:(id)arg1;
- (void)didBeginEditingText;
- (id)closestRepToPoint:(struct CGPoint)arg1 forStorage:(id)arg2;
- (struct CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (_Bool)showsComments;
- (void)setShowsComments:(_Bool)arg1;
- (_Bool)canHandleGesture:(id)arg1;
- (void)gestureSequenceWillBegin;
- (void)gestureSequenceDidEnd;
- (id)infosToHideForCanvas:(id)arg1;
- (void)resumeEditing;
- (id)p_beginEditingPossibleContainedRep:(id *)arg1;
- (void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3;
- (id)p_repsForStorage:(id)arg1;
- (id)_repsForStorage:(id)arg1;
- (void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(CDUnknownBlockType)arg3;
- (void)willEndEditingText;
- (_Bool)suppressDoubleTapForSelection;
- (_Bool)textRepsShouldTileAggressively;
- (id)closestRepToPoint:(struct CGPoint)arg1;
- (_Bool)zoomColumnAtPoint:(struct CGPoint)arg1;
- (void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(_Bool)arg3;
- (void)closeHyperlinkPopover;
- (_Bool)hyperlinkPopoverIsShown;
- (_Bool)cellCommentsAllowedForTableInfo:(id)arg1;

@end
