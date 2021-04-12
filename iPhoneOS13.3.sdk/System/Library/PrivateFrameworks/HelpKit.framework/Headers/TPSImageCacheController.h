//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/TPSDataCacheController.h>

@interface TPSImageCacheController : TPSDataCacheController
{
}

+ (id)defaultInMemoryImageCache;
+ (id)sharedInstance;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isURLValid:(id)arg1;
- (id)getImageForPath:(id)arg1;
- (id)imageFromMemoryCacheForPath:(id)arg1;
- (void)removeInMemoryCacheForPath:(id)arg1;
- (void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(NSUInteger)arg3;
- (void)addInMemoryCacheForImage:(id)arg1 path:(id)arg2 cost:(NSUInteger)arg3;
- (void)removeInMemoryCache;
- (void)removeAllDataCache;
- (id)newDataCache;
- (void)commonInit;

@end

