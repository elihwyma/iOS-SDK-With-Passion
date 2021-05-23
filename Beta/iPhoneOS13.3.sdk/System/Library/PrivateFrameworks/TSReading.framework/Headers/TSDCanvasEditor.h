/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, TSDCanvasEditorHelper, TSDCanvasSelection, TSDInteractiveCanvasController, TSKSelection, TSPObject, UIView;

@protocol TSDArrangeInspectorDelegate, TSDCanvasSelection, TSDInlineFloatingWrapInspectorDelegate, TSDTextSelection;

@interface TSDCanvasEditor : NSObject

{
    TSDInteractiveCanvasController *mInteractiveCanvasController;
    TSDCanvasEditorHelper *mCanvasEditorHelper;
    TSDCanvasSelection *mSelection;
    NSObject<TSDArrangeInspectorDelegate> *mZOrderArranger;
    NSObject<TSDInlineFloatingWrapInspectorDelegate> *mInlineFloatingEditor;
    _Bool mPreventImageDataReplace;
    UIView *mInputView;
}

@property (nonatomic, readonly) NSSet *infosForSelectAllInRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TSKSelection *selection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingFill;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingStroke;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShadow;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingReflection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingOpacity;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingTextInset;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingEndpoints;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingResize;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (retain, nonatomic, readonly) TSKSelection<TSDTextSelection> *textInputSelection;
@property (nonatomic, readonly) struct _NSRange markedRange;
@property (retain, readonly) UIView *inputView;
@property (retain, readonly) UIView *inputAccessoryView;
@property (readonly) _Bool wantsRawArrowKeyEvents;
@property (retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) TSDCanvasEditorHelper *canvasEditorHelper;
@property (nonatomic, readonly) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property (nonatomic, readonly) TSPObject *modelForSelection;

+ (id)canvasSelectionWithInfos:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (Class)canvasEditorHelperClass;
+ (_Bool)physicalKeyboardIsSender:(id)arg1;
+ (CDUnknownBlockType)spatialInfoComparator;

- (void)dealloc;
- (void)endEditing;
- (void)teardown;
- (long long)returnKeyType;
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;
- (id)textInRange:(struct _NSRange)arg1;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)copy:(id)arg1;
- (id)selectionRectsForRange:(struct _NSRange)arg1;
- (id)keyCommands;
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (struct _NSRange)editRange;
- (void)insertTab:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (unsigned long long)textLength;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (id)documentRoot;
- (id)selectionWithRange:(struct _NSRange)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)wantsKeyboard;
- (_Bool)canAddOrShowComment;
- (id)drawables;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)pasteboardController;
- (void)repWasCreated:(id)arg1;
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (void)extendSelectionLeft;
- (void)extendSelectionRight;
- (id)textColorAtCharIndex:(unsigned long long)arg1;
- (id)textFontAtCharIndex:(unsigned long long)arg1;
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;
- (void)clearMarkedRange;
- (_Bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;
- (_Bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;
- (void)canvasInfosDidChange;
- (id)canvasSelectionWithInfos:(id)arg1;
- (void)setSelectionToRep:(id)arg1;
- (void)setSelectionToInfo:(id)arg1;
- (id)editorToPopToOnEndEditing;
- (_Bool)isRepSelectable:(id)arg1;
- (_Bool)isSelectedInfo:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (_Bool)canDeleteComment;
- (id)p_filterNonDisplayedInfos:(id)arg1;
- (_Bool)canvasEditorCanDeleteWithSender:(id)arg1;
- (_Bool)canvasEditorCanCopyWithSender:(id)arg1;
- (_Bool)canCopyStyle;
- (unsigned long long)countOfDrawables;
- (_Bool)canSelectAllWithSender:(id)arg1;
- (_Bool)canGroupDrawable:(id)arg1;
- (_Bool)canGroupWithSender:(id)arg1;
- (_Bool)canUngroupWithSender:(id)arg1;
- (void)setSelectionToInfos:(id)arg1;
- (id)p_spatiallySortedDrawables;
- (id)p_nextInfoInTabSequence:(int)arg1;
- (void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
- (void)connectWithConnectionLine:(id)arg1;
- (_Bool)shouldUseAlternateSelectionHighlight;
- (_Bool)canvasEditorCanCutWithSender:(id)arg1;
- (_Bool)canvasEditorCanDuplicateWithSender:(id)arg1;
- (_Bool)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (_Bool)canvasEditorCanSelectAllWithSender:(id)arg1;
- (_Bool)canvasEditorCanGroupWithSender:(id)arg1;
- (_Bool)canvasEditorCanUngroupWithSender:(id)arg1;
- (_Bool)shouldPushNewEditorForNewSelection;
- (Class)editorClassForSelection;
- (void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;

@end
