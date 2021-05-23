/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PXImportImageCache : NSObject

{
    unsigned short _imageFormat;
    NSMutableDictionary *_caches;
    NSObject<OS_dispatch_queue> *_cacheTableQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)tearDown;
- (void)configureWithFormat:(unsigned short)arg1;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageForIdentifer:(id)arg1;
- (id)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(_Bool)arg3 foundSize:(unsigned long long *)arg4;
- (void)imageForIdentifer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeCacheForIdentifiers:(id)arg1;
- (id)cacheTableForIdentifier:(id)arg1;
- (void)accessImageTableForIdentifier:(id)arg1 withChangeBlock:(CDUnknownBlockType)arg2;

@end
