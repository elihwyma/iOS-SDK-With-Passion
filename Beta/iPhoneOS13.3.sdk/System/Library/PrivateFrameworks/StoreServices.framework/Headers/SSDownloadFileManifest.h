/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject

{
    SSXPCConnection *_connection;
    long long _manifestType;
}

@property (readonly) long long manifestType;

- (id)init;
- (void)dealloc;
- (id)initWithManifestType:(long long)arg1;
- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)rebuildManifestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
