/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, NSString;

@interface ML3PersistentIDGenerator : NSObject

{
    ML3DatabaseConnection *_connection;
    NSString *_tableName;
    NSString *_validateStartingPersistentIdSQL;
    NSString *_nextUsedPersistentIdSQL;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
}

- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;
- (long long)nextPersistentID;
- (void)_calculateNewRun;

@end
