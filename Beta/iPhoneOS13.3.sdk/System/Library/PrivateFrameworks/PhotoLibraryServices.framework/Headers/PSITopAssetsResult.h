/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_dispatch_queue, PSITopAssetsResultDelegate;

@interface PSITopAssetsResult : NSObject

{
    id <PSITopAssetsResultDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSArray *_assetUUIDs;
    const struct __CFArray *_assetIds;
}

@property (retain, nonatomic) const struct __CFArray *assetIds;
@property (weak, nonatomic) id <PSITopAssetsResultDelegate> delegate;
@property (nonatomic, readonly) unsigned long long assetMatchCount;
@property (nonatomic, readonly) NSArray *assetUUIDs;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fetchAssetUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
