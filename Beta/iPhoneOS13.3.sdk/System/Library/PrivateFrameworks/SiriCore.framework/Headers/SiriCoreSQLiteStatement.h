/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@interface SiriCoreSQLiteStatement : NSObject

{
    struct sqlite3_stmt *_impl;
    _Bool _finalizeWhenDone;
}

- (void)dealloc;
- (void)reset;
- (struct sqlite3_stmt *)impl;
- (void)clearBindings;
- (id)initWithImpl:(struct sqlite3_stmt *)arg1 finalizeWhenDone:(_Bool)arg2;

@end
