/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface SearchUIAppIconImageCache : NSObject

{
    NSCache *_imageCache;
}

@property (retain, nonatomic) NSCache *imageCache;

+ (id)sharedCache;

- (id)init;
- (id)cachedImageForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
- (void)updateImage:(id)arg1 forBundleIdentifier:(id)arg2 variant:(unsigned long long)arg3;
- (void)dateDidChange;
- (void)appIconImageDidChange:(id)arg1;
- (id)cacheKeyForVariant:(unsigned long long)arg1;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1;

@end
