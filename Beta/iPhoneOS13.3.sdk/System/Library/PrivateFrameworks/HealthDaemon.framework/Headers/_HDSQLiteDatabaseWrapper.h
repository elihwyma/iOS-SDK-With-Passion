/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteDatabase, NSString;

@interface _HDSQLiteDatabaseWrapper : NSObject

{
    HDSQLiteDatabase *_database;
    unsigned long long _generation;
    unsigned long long _threadID;
    unsigned long long _options;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic, readonly) NSString *typeString;

- (id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2;
- (void)captureThreadInfo;

@end
