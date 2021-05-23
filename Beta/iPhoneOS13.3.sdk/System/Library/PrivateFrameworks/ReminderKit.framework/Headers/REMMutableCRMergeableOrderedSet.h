/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class CRDocument, NSMutableArray, NSString, REMMutableCRUndo, REMReplicaIDHelper, REMReplicaIDSource;

@protocol REMReplicaManagerProviding;

@interface REMMutableCRMergeableOrderedSet : NSObject

{
    id <REMReplicaManagerProviding> _replicaManagerProvider;
    REMReplicaIDSource *_replicaIDSource;
    struct CRDocument *_document;
    REMReplicaIDHelper *_replicaIDHelper;
    NSMutableArray *_undos;
    REMMutableCRUndo *_currentUndo;
}

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) CRDocument *document;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper;
@property (nonatomic, readonly) NSMutableArray *undos;
@property (retain, nonatomic) REMMutableCRUndo *currentUndo;
@property (retain, nonatomic) id <REMReplicaManagerProviding> replicaManagerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)addObject:(id)arg1;
- (id)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)removeObjectAtIndex:(unsigned long long)arg1;
- (void)undo;
- (void)undo:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(struct CRDocument *)arg2 undos:(id)arg3;
- (struct CRDocument *)documentToEdit;
- (id)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)wantsUndoCommands;
- (id)immutableOrderedSet;

@end
