/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface ML3DatabaseRecoveryOperation : NSOperation

{
    NSString *_path;
    NSError *_error;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSError *error;

- (void)main;
- (id)_lastCorruptionRestoreAttemptDate;
- (void)_updateLastCorruptionRestoreAttemptDate;
- (void)_recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseFilePath:(id)arg1;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;

@end
