/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICSQLiteConnection, NSDictionary, NSString;

@interface ICSQLiteStatement : NSObject

{
    ICSQLiteConnection *_connection;
    struct sqlite3_stmt *_statement;
    ICSQLiteStatement *_strongSelf;
}

@property (nonatomic, readonly) ICSQLiteConnection *connection;
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
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 connection:(id)arg2;

@end
