/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/TPSDataCacheController.h>

@interface TPSImageCacheController : TPSDataCacheController

+ (id)sharedInstance;
+ (id)defaultInMemoryImageCache;

- (void)commonInit;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(unsigned long long)arg3;
- (id)formattedDataWithData:(id)arg1;
- (_Bool)isURLValid:(id)arg1;
- (id)newDataCache;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllDataCache;
- (void)removeInMemoryCache;
- (id)imageFromMemoryCacheForPath:(id)arg1;
- (void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(unsigned long long)arg3;
- (void)removeInMemoryCacheForPath:(id)arg1;
- (id)getImageForPath:(id)arg1;

@end
