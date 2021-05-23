/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseConnection.h>

@class MLMediaLibraryService, NSUUID;

@protocol ML3DatabaseDistantConnectionDelegate;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection

{
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    _Bool _connectionOpen;
    id <ML3DatabaseDistantConnectionDelegate> _distantDelegate;
}

@property (weak, nonatomic) id <ML3DatabaseDistantConnectionDelegate> distantDelegate;

- (void)dealloc;
- (_Bool)close;
- (_Bool)isOpen;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)isReadOnly;
- (id)initWithDatabasePath:(id)arg1;
- (id)currentTransactionID;
- (struct sqlite3 *)_sqliteHandle;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(CDUnknownBlockType)arg3;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(_Bool)arg4;
- (_Bool)registerModule:(id)arg1;
- (void)setProfilingLevel:(int)arg1;
- (_Bool)_openWithFlags:(int)arg1;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (_Bool)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (_Bool)_internalEndTransactionAndCommit:(_Bool)arg1;
- (_Bool)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (int)checkpointDatabase;
- (void)_serviceTerminatedTransactionNotification:(id)arg1;
- (_Bool)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 isRetry:(_Bool)arg2;
- (_Bool)shouldCacheStatements;

@end
