/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSEnumerator.h>

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator

{
    NSEnumerator *_dirtyInsertsEnumerator;
    ML3DatabaseConnection *_connection;
    unsigned long long _offset;
}

- (id)nextObject;
- (id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2;

@end
