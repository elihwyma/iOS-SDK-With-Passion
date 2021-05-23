/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@interface MSObjectQueue : NSObject

{
    struct sqlite3 *_db;
    struct __CFDictionary *_statements;
}

@property (readonly) long long count;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (struct sqlite3_stmt *)_statementLabel:(id)arg1 query:(const char *)arg2;
- (void)appendObjectWrappers:(id)arg1;
- (id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt *)arg1 outSize:(long long *)arg2;
- (id)allObjectWrappersMaxCount:(long long)arg1;
- (id)objectWrappersWithZeroSizeMaxCount:(long long)arg1;
- (id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2;
- (id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)arg1;
- (void)removeObjectWrappersFromQueue:(id)arg1;
- (void)removeAllObjectWrappersFromQueue;
- (void)commitErrorCountsForObjectWrappers:(id)arg1;
- (void)commitObjectsWrappers:(id)arg1;

@end
