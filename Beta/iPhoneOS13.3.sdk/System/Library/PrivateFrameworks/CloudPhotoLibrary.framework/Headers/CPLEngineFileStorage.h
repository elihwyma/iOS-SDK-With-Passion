/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLPlatformObject, NSMutableArray, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface CPLEngineFileStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    _Bool _keepOriginals;
    _Bool _deleteImmediately;
    CPLPlatformObject *_platformObject;
    NSURL *_baseURL;
}

@property (nonatomic) _Bool keepOriginals;
@property (nonatomic) _Bool deleteImmediately;
@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;

- (id)initWithBaseURL:(id)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)checkIsEmpty;
- (void)doRead:(CDUnknownBlockType)arg1;
- (_Bool)doWrite:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)_recoverFromCrashWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)openWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (unsigned long long)countOfUncommittedFiles;
- (_Bool)hasCrashMarker;
- (void)_addIdentityToUncommittedFiles:(id)arg1;
- (void)_removeIdentityFromUncommittedFiles:(id)arg1;
- (_Bool)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (_Bool)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 moveIfPossible:(_Bool)arg4 needsCommit:(_Bool *)arg5 error:(id *)arg6;
- (_Bool)storeData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 needsCommit:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)commitFileWithIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)discardUncommittedFileWithIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)deleteFileWithIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)deleteFileWithIdentity:(id)arg1 includingOriginal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;
- (_Bool)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;
- (_Bool)hasFileWithIdentity:(id)arg1;
- (void)checkFileSizeForIdentity:(id)arg1;
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)releaseFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)discardAllRetainedFileURLsWithError:(id *)arg1;
- (_Bool)compactStorage:(id *)arg1;
- (_Bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_compactStorageIncludeOriginals:(_Bool)arg1 desiredFreeSpace:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)compactStorageIncludeOriginals:(_Bool)arg1 error:(id *)arg2;
- (_Bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 includeOriginals:(_Bool)arg3 error:(id *)arg4;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)fileEnumerator;

@end
