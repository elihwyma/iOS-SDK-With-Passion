/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXDatabaseStatement : NSObject

{
    struct sqlite3_stmt *_statement;
    struct sqlite3 *_database;
}

@property (nonatomic) struct sqlite3_stmt *statement;
@property (nonatomic) struct sqlite3 *database;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (_Bool)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id *)arg3;
- (_Bool)bindText:(const char *)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id *)arg4;
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)bind:(id)arg1 error:(id *)arg2;
- (_Bool)executeWithError:(id *)arg1;
- (_Bool)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;

@end
