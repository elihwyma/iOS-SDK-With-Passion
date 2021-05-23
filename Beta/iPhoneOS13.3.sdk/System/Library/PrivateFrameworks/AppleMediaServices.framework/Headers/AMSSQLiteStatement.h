/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteStatement : NSObject

{
    AMSSQLiteConnection *_connection;
    struct sqlite3_stmt *_statement;
    AMSSQLiteStatement *_strongSelf;
}

@property (nonatomic, readonly) AMSSQLiteConnection *connection;
@property (nonatomic, readonly) struct sqlite3_stmt *sqlite3_stmt;
@property (copy, nonatomic, readonly) NSDictionary *columnIndexByName;
@property (nonatomic, readonly, getter=isReadOnly) _Bool readOnly;
@property (copy, nonatomic, readonly) NSString *SQL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)reset;
- (int)finalizeStatement;
- (int)step;
- (void)bindArray:(id)arg1 atPosition:(int)arg2;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDate:(id)arg1 atPosition:(int)arg2;
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindURL:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;

@end
