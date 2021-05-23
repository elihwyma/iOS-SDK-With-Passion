/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPEditingController.h>

@interface SXTextTangierEditingController : TSWPEditingController

{
    _Bool _startingInitialSelectionDrag;
}

@property (nonatomic) _Bool startingInitialSelectionDrag;

- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)wantsCaret;
- (_Bool)wantsKeyboard;
- (_Bool)canAddOrShowComment;
- (_Bool)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;
- (void)tappedOnKnob:(id)arg1;
- (id)editingReps;
- (id)editorKeyboardLanguage;

@end
