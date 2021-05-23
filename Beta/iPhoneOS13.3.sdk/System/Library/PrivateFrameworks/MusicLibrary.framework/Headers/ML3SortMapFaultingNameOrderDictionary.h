/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSMutableDictionary.h>

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary

{
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end
