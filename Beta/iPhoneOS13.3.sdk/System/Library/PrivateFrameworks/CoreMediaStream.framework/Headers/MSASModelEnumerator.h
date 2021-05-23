/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSEnumerator.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface MSASModelEnumerator : NSEnumerator

{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_stmt;
    CDUnknownBlockType _stepBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) struct sqlite3 *db;
@property (nonatomic) struct sqlite3_stmt *stmt;
@property (copy, nonatomic) CDUnknownBlockType stepBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)enumeratorWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (id)nextObject;
- (id)initWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;

@end
