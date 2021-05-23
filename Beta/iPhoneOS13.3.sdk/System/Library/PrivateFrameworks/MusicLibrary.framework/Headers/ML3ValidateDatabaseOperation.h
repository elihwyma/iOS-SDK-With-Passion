/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSOperation.h>

@class ML3MusicLibrary;

@protocol ML3ValidationDatabaseOperationDelegate;

@interface ML3ValidateDatabaseOperation : NSOperation

{
    _Bool _truncateBeforeValidating;
    ML3MusicLibrary *_library;
    id <ML3ValidationDatabaseOperationDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (weak, nonatomic) id <ML3ValidationDatabaseOperationDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool truncateBeforeValidating;

- (void)main;
- (_Bool)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id *)arg2;
- (_Bool)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id *)arg2;
- (_Bool)_internalUserAgreesToRebuildUnmigratableDatabase;
- (_Bool)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id *)arg2;
- (id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
