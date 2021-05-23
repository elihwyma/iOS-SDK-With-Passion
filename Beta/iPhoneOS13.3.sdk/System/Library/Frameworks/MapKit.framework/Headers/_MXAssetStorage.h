/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXAssetStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_storage;
    NSMutableSet *_loadingKeys;
    NSMutableDictionary *_fetchBlocks;
}

- (id)init;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)loadAssetForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fetchAssetForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
