/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class CRDocument, CRTombstoneOrderedSet, NSMutableOrderedSet, NSString, NSUUID, REMObjectID;

@protocol REMCRReminderIDListDelegate;

@interface REMCRReminderIDList : NSObject <Swift>

{
    CRTombstoneOrderedSet *_reminderIDsStorage;
    NSObject<REMCRReminderIDListDelegate> *_delegate;
    NSUUID *_replica;
    CRDocument *_document;
    REMObjectID *_remObjectID;
}

@property (nonatomic, readonly) NSUUID *replica;
@property (retain, nonatomic) CRDocument *document;
@property (retain, nonatomic) REMObjectID *remObjectID;
@property (weak, nonatomic) NSObject<REMCRReminderIDListDelegate> *delegate;
@property (nonatomic, readonly) NSMutableOrderedSet *reminderIDsProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)listFromSerializedData:(id)arg1 replica:(id)arg2;

- (id)init;
- (id)_orderedSet;
- (id)copyForReplica:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)wantsUndoCommands;
- (void)mergeWith:(id)arg1;
- (id)initWithDocument:(id)arg1 objectID:(id)arg2;
- (void)addReminder:(id)arg1;
- (unsigned long long)countOfReminderIDs;
- (id)objectInReminderIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInReminderIDsOfObject:(id)arg1;
- (void)insertObject:(id)arg1 inReminderIDsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromReminderIDsAtIndex:(unsigned long long)arg1;

@end
