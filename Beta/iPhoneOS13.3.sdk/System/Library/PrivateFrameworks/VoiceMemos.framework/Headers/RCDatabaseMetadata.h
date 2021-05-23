/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface RCDatabaseMetadata : NSObject

{
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_coordinator;
    NSMutableDictionary *_metadata;
    _Bool _dirty;
}

@property (readonly) _Bool dirty;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)save;
- (id)initWithPersistentStore:(id)arg1;

@end
