/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (_Bool)_execute:(id *)arg1;
- (_Bool)_executeStatements:(id)arg1 onConnection:(id)arg2 withError:(id *)arg3;

@end
