/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class CPMemoryPool, NSHashTable, NSMutableDictionary, NSString, UIImage;

@interface SBHIconImageCache : NSObject <Swift>

{
    NSMutableDictionary *_images;
    NSMutableDictionary *_unmaskedImages;
    NSHashTable *_failedIcons;
    UIImage *_genericImage;
    UIImage *_overlayImage;
    UIImage *_unmaskedOverlayImage;
    NSHashTable *_observedIcons;
    NSHashTable *_observers;
    NSString *_name;
    unsigned long long _poolingBypassCount;
    CPMemoryPool *_iconImagesMemoryPool;
    struct SBIconImageInfo _iconImageInfo;
}

@property (nonatomic, readonly) CPMemoryPool *iconImagesMemoryPool;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct SBIconImageInfo iconImageInfo;
@property (nonatomic, readonly) UIImage *genericImage;
@property (nonatomic, readonly) UIImage *overlayImage;
@property (nonatomic, readonly) UIImage *unmaskedOverlayImage;
@property (nonatomic) unsigned long long poolingBypassCount;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_backgroundQueue;
+ (_Bool)supportsMemoryPooling;
+ (id)overlayImageWithInfo:(struct SBIconImageInfo)arg1;
+ (id)unmaskedOverlayImageWithInfo:(struct SBIconImageInfo)arg1;
+ (id)genericImageWithInfo:(struct SBIconImageInfo)arg1;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 iconImageInfo:(struct SBIconImageInfo)arg2;
- (void)cacheImage:(id)arg1 forIcon:(id)arg2;
- (void)iconImageDidUpdate:(id)arg1;
- (id)imageForIcon:(id)arg1;
- (void)purgeCachedImagesForIcons:(id)arg1;
- (void)purgeAllCachedImages;
- (void)cacheImagesForIcons:(id)arg1;
- (id)cachedImageForIcon:(id)arg1;
- (void)cacheImageForIcon:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)unmaskedImageForIcon:(id)arg1;
- (id)realImageForIcon:(id)arg1;
- (id)_cacheKeyForIcon:(id)arg1;
- (id)pooledIconImageForMappedIconImage:(id)arg1;
- (void)beginObservingIconIfNecessary:(id)arg1;
- (id)cachedUnmaskedImageForIcon:(id)arg1;
- (void)endObservingIcon:(id)arg1;
- (void)endObservingAllIcons;
- (id)memoryMappedIconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withDrawing:(CDUnknownBlockType)arg3;
- (_Bool)_canPoolImage;
- (id)_pooledIconImageForIconImage:(id)arg1 allowingOptOut:(_Bool)arg2;
- (id)_iconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 failGracefully:(_Bool)arg3 drawing:(CDUnknownBlockType)arg4;
- (void)notifyObserversOfUpdateForIcon:(id)arg1;
- (id)memoryMappedIconImageForIconImage:(id)arg1;

@end
