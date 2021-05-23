/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

{
    NSPersistentStoreCoordinator *_sourceCoordinator;
    NSManagedObjectContext *_destinationContext;
}

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;

- (void)dealloc;
- (void)registerForAccountNotifications;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)postCrossProcessNotificationName:(id)arg1;
- (void)postAccountDidChangeNotification;
- (void)postNotesPasswordStatusDidChangeNotification;

@end
