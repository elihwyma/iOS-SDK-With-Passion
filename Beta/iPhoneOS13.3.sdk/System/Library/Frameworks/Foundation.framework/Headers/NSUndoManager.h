/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NSUndoManager : NSObject

{
    id _undoStack;
    id _redoStack;
    NSArray *_runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    void *_NSUndoManagerPrivate2;
    void *_NSUndoManagerPrivate3;
}

@property (readonly) long long groupingLevel;
@property (readonly, getter=isUndoRegistrationEnabled) _Bool undoRegistrationEnabled;
@property _Bool groupsByEvent;
@property unsigned long long levelsOfUndo;
@property (copy) NSArray *runLoopModes;
@property (readonly) _Bool canUndo;
@property (readonly) _Bool canRedo;
@property (readonly, getter=isUndoing) _Bool undoing;
@property (readonly, getter=isRedoing) _Bool redoing;
@property (readonly) _Bool undoActionIsDiscardable;
@property (readonly) _Bool redoActionIsDiscardable;
@property (copy, readonly) NSString *undoActionName;
@property (copy, readonly) NSString *redoActionName;
@property (copy, readonly) NSString *undoMenuItemTitle;
@property (copy, readonly) NSString *redoMenuItemTitle;

+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(_Bool)arg1;
+ (void)_endTopLevelGroupings;

- (id)init;
- (void)dealloc;
- (id)_methodSignatureForTargetSelector:(SEL)arg1;
- (void)_forwardTargetInvocation:(id)arg1;
- (id)_undoStack;
- (void)endUndoGrouping;
- (void)_processEndOfEventNotification:(id)arg1;
- (_Bool)_endUndoGroupRemovingIfEmpty:(_Bool)arg1;
- (void)disableUndoRegistration;
- (void)undoNestedGroup;
- (void)enableUndoRegistration;
- (_Bool)_shouldCoalesceTypingForText:(id)arg1:(id)arg2;
- (void)_commitUndoGrouping;
- (void)_rollbackUndoGrouping;
- (void)_delayAutomaticTermination:(double)arg1;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)beginUndoGrouping;
- (void)_prepareEventGrouping;
- (void)_postCheckpointNotification;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)__redoCommonDoSingle:(_Bool)arg1;
- (void)_registerUndoObject:(id)arg1;
- (void)_setGroupIdentifier:(id)arg1;
- (id)undoMenuTitleForUndoActionName:(id)arg1;
- (id)redoMenuTitleForUndoActionName:(id)arg1;
- (void)undo;
- (void)redo;
- (void)__redoSingle;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)arg1;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)registerUndoWithTarget:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setActionName:(id)arg1;
- (void)setActionIsDiscardable:(_Bool)arg1;

@end
