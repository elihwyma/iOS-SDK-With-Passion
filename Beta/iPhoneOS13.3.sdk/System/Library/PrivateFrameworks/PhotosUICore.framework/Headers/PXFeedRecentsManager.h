/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOrderedSet, PHPhotoLibrary;

@protocol PXFeedRecentsManagerDelegate;

@interface PXFeedRecentsManager : NSObject

{
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    PHPhotoLibrary *_photoLibrary;
    long long _count;
    id <PXFeedRecentsManagerDelegate> _delegate;
    NSOrderedSet *__cachedRecentAssets;
    NSArray *__cachedRecentPHAssets;
}

@property (retain, nonatomic, setter=_setPhotoLibrary:) PHPhotoLibrary *photoLibrary;
@property (nonatomic, setter=_setCount:) long long count;
@property (copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets;
@property (copy, nonatomic, setter=_setCachedRecentPHAssets:) NSArray *_cachedRecentPHAssets;
@property (weak, nonatomic) id <PXFeedRecentsManagerDelegate> delegate;
@property (copy, nonatomic, readonly) NSOrderedSet *recentAssets;
@property (copy, nonatomic, readonly) NSArray *recentPHAssets;

- (void)dealloc;
- (void)shouldReload:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2;
- (_Bool)_updateCachedRecentAssets;
- (void)_invalidateCachedRecentAssets;

@end
