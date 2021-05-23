/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICDrawingAttachmentController, ICDrawingUndoCheckPoint, NSMutableArray, NSOperationQueue, NSUndoManager;

@interface ICDrawingUndoStack : NSObject

{
    ICDrawingAttachmentController *_drawingController;
    NSMutableArray *_undoStack;
    NSMutableArray *_redoStack;
    NSMutableArray *_checkPointCommands;
    NSOperationQueue *_operationQueue;
    NSUndoManager *_undoManager;
    ICDrawingUndoCheckPoint *_initialCheckPoint;
}

@property (retain, nonatomic) ICDrawingUndoCheckPoint *initialCheckPoint;
@property (retain, nonatomic) NSMutableArray *undoStack;
@property (retain, nonatomic) NSMutableArray *redoStack;
@property (retain, nonatomic) NSMutableArray *checkPointCommands;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (weak, nonatomic, readonly) ICDrawingAttachmentController *drawingController;
@property (nonatomic, readonly) unsigned long long undoStackDepth;

- (void)dealloc;
- (void)reset;
- (void)undo;
- (void)redo;
- (void)addUndoCommand:(id)arg1;
- (void)performUndo;
- (void)performRedo;
- (void)didUndoOrRedo:(id)arg1;
- (void)undoManagerCommand:(id)arg1;
- (void)checkIfNewCheckPointIsNeeded;
- (id)findUndoCheckPointRenderCostOut:(double *)arg1 commandsAfterOut:(id *)arg2;
- (void)didAddCheckPoint;
- (void)finishUndo:(id)arg1;
- (void)applyCommandFromStack:(id)arg1 toStack:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didRemoveCheckPoint;
- (void)finishRedo:(id)arg1;
- (id)initWithDrawingController:(id)arg1;
- (void)setInitialImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forCommands:(id)arg3;
- (void)didAddNewCommand:(id)arg1;
- (void)addEraseUndoCommand:(id)arg1;

@end
