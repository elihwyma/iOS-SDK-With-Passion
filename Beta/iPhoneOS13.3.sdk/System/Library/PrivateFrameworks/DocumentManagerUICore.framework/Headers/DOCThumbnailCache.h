/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject

{
    NSMapTable *_cachedThumbnailItems;
    NSCache *_recentlyUsedItems;
}

@property (nonatomic, readonly) NSMapTable *cachedThumbnailItems;
@property (nonatomic, readonly) NSCache *recentlyUsedItems;

- (id)init;
- (void)clear;

@end
