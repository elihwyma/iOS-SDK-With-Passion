/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ML3DatabaseStatement : NSObject

{
    NSString *_sql;
    _Bool _clearBindingsAfterRunning;
    _Bool _isExecuting;
    struct sqlite3_stmt *_sqliteStatement;
}

@property (nonatomic, readonly) NSString *sql;
@property (nonatomic, readonly) struct sqlite3_stmt *sqliteStatement;
@property (nonatomic) _Bool clearBindingsAfterRunning;
@property (nonatomic) _Bool isExecuting;

- (void)dealloc;
- (id)description;
- (int)reset;
- (int)finalizeStatement;
- (int)step;
- (_Bool)isBusy;
- (_Bool)isReadOnly;
- (int)clearBindings;
- (void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg1 SQL:(id)arg2;
- (void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2;
- (void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2;
- (void)bindNullForParameterAtPosition:(int)arg1;
- (void)bindBytes:(const void *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindBytesNoCopy:(const void *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindUTF8String:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8StringNoCopy:(const char *)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8StringNoCopy:(const char *)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindValuesForParameterNames:(id)arg1;
- (void)bindValuesInArray:(id)arg1;

@end
