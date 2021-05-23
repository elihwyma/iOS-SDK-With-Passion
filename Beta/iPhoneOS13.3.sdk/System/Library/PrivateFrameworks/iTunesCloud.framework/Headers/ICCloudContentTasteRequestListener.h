/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ICCloudContentTasteRequestListener : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedCloudContentTasteRequestListener;

- (id)init;
- (id)_init;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_setupContentTasteServiceConnection;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 configuration:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
