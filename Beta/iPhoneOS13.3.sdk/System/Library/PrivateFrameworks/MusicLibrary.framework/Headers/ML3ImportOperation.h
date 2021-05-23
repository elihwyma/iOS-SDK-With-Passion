/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSOperation.h>

@class ML3ServiceDatabaseImport, NSData, NSError;

@interface ML3ImportOperation : NSOperation

{
    CDUnknownBlockType _clientCompletionHandler;
    _Bool _suspended;
    _Bool _success;
    float _progress;
    ML3ServiceDatabaseImport *_import;
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    NSData *_returnData;
}

@property (nonatomic, readonly) unsigned long long importSource;
@property (nonatomic, readonly) ML3ServiceDatabaseImport *import;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly) float progress;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSData *returnData;

+ (id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2;

- (id)init;
- (void)main;
- (void)setError:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setSuccess:(_Bool)arg1;
- (id)longDescription;
- (CDUnknownBlockType)_clientCompletionHandler;
- (void)_writerTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseImport:(id)arg1;
- (void)setReturnData:(id)arg1;
- (void)_setClientCompletionHandler:(CDUnknownBlockType)arg1;

@end
