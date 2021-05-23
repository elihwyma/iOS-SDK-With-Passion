/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScope, CPLEngineStore, NSData, NSString;

@interface CPLEngineScopedTask : CPLEngineSyncTask

{
    NSString *_clientCacheIdentifier;
    CPLEngineScope *_scope;
    NSData *_transportScope;
    CPLEngineStore *_store;
}

@property (nonatomic, readonly) NSString *clientCacheIdentifier;
@property (nonatomic, readonly) CPLEngineScope *scope;
@property (nonatomic, readonly) NSData *transportScope;
@property (nonatomic, readonly) CPLEngineStore *store;

- (_Bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;

@end
