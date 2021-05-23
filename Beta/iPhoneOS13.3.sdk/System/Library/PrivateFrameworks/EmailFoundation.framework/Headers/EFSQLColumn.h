/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface EFSQLColumn : NSObject

{
    long long _index;
    struct sqlite3_stmt *_statement;
}

@property (nonatomic, readonly) struct sqlite3_stmt *statement;
@property (nonatomic, readonly) long long index;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) id objectValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSData *dataValue;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) long long databaseIDValue;
@property (nonatomic, readonly) _Bool boolValue;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) NSDate *dateValue;

- (id)debugDescription;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg1 index:(long long)arg2;
- (id)initWithPreparedStatement:(id)arg1 index:(long long)arg2;

@end
