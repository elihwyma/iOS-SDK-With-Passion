/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class TSDCanvasEditorHelper, TSDInteractiveCanvasController, TSKSelection, TSPObject;

@protocol TSDCanvasSelection;

@protocol TSDCanvasEditor <Swift>

@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) TSDCanvasEditorHelper *canvasEditorHelper;
@property (nonatomic, readonly) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property (nonatomic, readonly) TSPObject *modelForSelection;

+ (unsigned short)canvasSelectionWithInfos: /* Error: Ran out of types for this method. */;
+ (unsigned short)canvasSelectionWithInfos:andContainer: /* Error: Ran out of types for this method. */;

- (unsigned short)teardown;
- (unsigned short)copy: /* Error: Ran out of types for this method. */;
- (unsigned short)select: /* Error: Ran out of types for this method. */;
- (unsigned short)selectAll: /* Error: Ran out of types for this method. */;
- (unsigned short)canPerformEditorAction:withSender: /* Error: Ran out of types for this method. */;
- (unsigned short)drawables;
- (unsigned short)initWithInteractiveCanvasController: /* Error: Ran out of types for this method. */;
- (unsigned short)repWasCreated: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelection:withFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasInfosDidChange;
- (unsigned short)canvasSelectionWithInfos: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectionToRep: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectionToInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)editorToPopToOnEndEditing;
- (unsigned short)isRepSelectable: /* Error: Ran out of types for this method. */;
- (unsigned short)isSelectedInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasSelectionWithInfos:andContainer: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanDeleteWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanCopyWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)countOfDrawables;
- (unsigned short)canGroupDrawable: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectionToInfos: /* Error: Ran out of types for this method. */;
- (unsigned short)copyToPasteboard:withSender: /* Error: Ran out of types for this method. */;
- (unsigned short)connectWithConnectionLine: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldUseAlternateSelectionHighlight;
- (unsigned short)canvasEditorCanCutWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanDuplicateWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanCopyStyleWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanSelectAllWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanGroupWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)canvasEditorCanUngroupWithSender: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldPushNewEditorForNewSelection;

@end
