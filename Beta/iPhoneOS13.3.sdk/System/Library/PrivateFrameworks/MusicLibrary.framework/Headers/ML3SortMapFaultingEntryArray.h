/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSMutableArray.h>

@class ML3DatabaseConnection, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3SortMapFaultingEntryArray : NSMutableArray

{
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (id)initWithConnection:(id)arg1;
- (void)enumerateDirtyObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end
