/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSKChangeNotifier;

@protocol TSDCanvasEditor;

@interface TSDCanvasEditorHelper : NSObject <Swift>

{
    TSKChangeNotifier *mChangeNotifier;
    id <TSDCanvasEditor> mCanvasEditor;
    _Bool mTornDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)canvasSelectionWithInfos:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (_Bool)physicalKeyboardIsSender:(id)arg1;
+ (Class)selectionClass;

- (void)dealloc;
- (void)teardown;
- (id)documentRoot;
- (id)interactiveCanvasController;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)canvasEditor;
- (id)canvasSelectionWithInfos:(id)arg1;
- (_Bool)isRepSelectable:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (_Bool)canDeleteComment;
- (id)initWithCanvasEditor:(id)arg1;
- (Class)editorClassForSelection:(id)arg1;
- (id)editorToPopToOnEndEditingForSelection:(id)arg1;
- (void)notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (void)pushNewEditorForSelection:(id)arg1;
- (id)canvasSelectionFromRep:(id)arg1;
- (_Bool)canUngroupWithSelection:(id)arg1;
- (_Bool)canPerformMaskWithShapeWithSender:(id)arg1;
- (Class)p_editorClassForSelection:(id)arg1 shouldIgnoreLockedState:(_Bool)arg2;
- (id)newEditorForEditorClass:(Class)arg1;
- (id)infosFromCanvasSelection:(id)arg1;
- (id)layoutsForAlignAndDistribute;
- (int)canvasEditorCanPerformCutAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformCopyStyleAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDeleteAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDuplicateAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformSelectAllAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformGroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformUngroupAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformConnectWithConnectionLineAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformAlignAction:(SEL)arg1 withSender:(id)arg2;
- (int)canvasEditorCanPerformDistributeAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)p_canReduceFileSizeForSelectedImages;
- (_Bool)canPerformMaskWithSender:(id)arg1;
- (_Bool)canPerformUnmaskWithSender:(id)arg1;
- (_Bool)canPerformMaskWithShapeTypeWithSender:(id)arg1;
- (int)canvasEditorCanPerformLockAction:(SEL)arg1 withSender:(id)arg2;
- (Class)editorClassForSelectionIgnoringLockedState:(id)arg1;
- (_Bool)p_selectionContainsInlineObjects:(id)arg1;
- (void)p_copy:(id)arg1;
- (_Bool)canGroupDrawables:(id)arg1;

@end
