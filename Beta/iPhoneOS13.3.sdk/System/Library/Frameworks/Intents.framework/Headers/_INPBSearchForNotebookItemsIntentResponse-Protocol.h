/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBSearchForNotebookItemsIntentResponse <Swift>

@property (copy, nonatomic) NSArray *notes;
@property (nonatomic, readonly) unsigned long long notesCount;
@property (nonatomic) int sortType;
@property (nonatomic) _Bool hasSortType;
@property (copy, nonatomic) NSArray *taskLists;
@property (nonatomic, readonly) unsigned long long taskListsCount;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;

+ (unsigned short)tasksType;
+ (unsigned short)notesType;
+ (unsigned short)taskListsType;

- (unsigned short)clearTasks;
- (unsigned short)addTasks: /* Error: Ran out of types for this method. */;
- (unsigned short)tasksAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearNotes;
- (unsigned short)addNotes: /* Error: Ran out of types for this method. */;
- (unsigned short)notesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)sortTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSortType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTaskLists;
- (unsigned short)addTaskLists: /* Error: Ran out of types for this method. */;
- (unsigned short)taskListsAtIndex: /* Error: Ran out of types for this method. */;

@end
