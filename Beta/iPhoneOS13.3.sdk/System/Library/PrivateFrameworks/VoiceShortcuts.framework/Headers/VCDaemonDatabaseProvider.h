/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSPersistentStoreDescription, NSString, WFDatabase;

@protocol OS_dispatch_queue;

@interface VCDaemonDatabaseProvider : NSObject

{
    WFDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFDatabase *database;
@property (copy, nonatomic, readonly) NSPersistentStoreDescription *storeDescription;

- (id)init;
- (_Bool)migrateDatabasesToShortcutsFolderIfNeeded;

@end
