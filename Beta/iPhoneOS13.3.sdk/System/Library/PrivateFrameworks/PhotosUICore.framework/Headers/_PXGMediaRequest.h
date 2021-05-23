/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXDisplayAsset, PXGDisplayAssetRequestObserver;

@interface _PXGMediaRequest : NSObject

{
    _Bool _gotAnyResult;
    id <PXDisplayAsset> _asset;
    id <PXGDisplayAssetRequestObserver> _observer;
    unsigned long long _postProcessOptions;
    struct CGSize _bestReceivedSize;
}

@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) id <PXGDisplayAssetRequestObserver> observer;
@property (nonatomic, readonly) unsigned long long postProcessOptions;
@property (nonatomic) struct CGSize bestReceivedSize;
@property (nonatomic) _Bool gotAnyResult;

- (id)initWithAsset:(id)arg1 observer:(id)arg2 postProcessOptions:(unsigned long long)arg3;

@end
