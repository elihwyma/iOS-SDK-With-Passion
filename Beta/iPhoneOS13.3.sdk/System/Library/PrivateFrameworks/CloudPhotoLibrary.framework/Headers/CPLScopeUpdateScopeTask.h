/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class NSData, NSObject;

@protocol CPLEngineTransportFetchTransportScopeTask, CPLEngineTransportGetLibraryInfoTask, OS_dispatch_queue;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportGetLibraryInfoTask> _getLibraryInfo;
    id <CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
    NSData *_fetchedTransportScope;
    _Bool _retryingFetchingTransportScope;
}

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (_Bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)_getLibraryInfo;
- (void)_fetchTransportScope;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1;
- (void)_markScopeAsFeatureDisabledWithFlags:(id)arg1;
- (void)_markScopeHasBadTransportScopeWithError:(id)arg1;

@end
