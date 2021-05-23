/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWebSelectionAssistant.h>

@class UILongPressGestureRecognizer, _UITextServiceSession;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant

{
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
}

@property (nonatomic, readonly) UILongPressGestureRecognizer *selectionLongPressRecognizer;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)selectionChanged;
- (void)showSelectionCommands;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)lookup:(id)arg1 withRange:(struct _NSRange)arg2 fromRect:(struct CGRect)arg3;
- (void)lookup:(id)arg1 fromRect:(struct CGRect)arg2;
- (id)interactionView;
- (id)asyncSelectionView;
- (void)initializeSelectionView;
- (struct CGRect)selectionFrame;
- (_Bool)shouldHandleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2;

@end
