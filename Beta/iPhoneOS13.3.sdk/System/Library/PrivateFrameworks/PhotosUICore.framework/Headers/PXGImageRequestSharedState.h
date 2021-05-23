/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver;

@interface PXGImageRequestSharedState : NSObject

{
    id <PXDisplayAssetFetchResult> _displayAssetFetchResult;
    id <PXGDisplayAssetRequestObserver> _observer;
    unsigned long long _presentationStyles;
    double _screenScale;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> displayAssetFetchResult;
@property (nonatomic, readonly) id <PXGDisplayAssetRequestObserver> observer;
@property (nonatomic, readonly) unsigned long long presentationStyles;
@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) double screenScale;

- (id)initWithDisplayAssetFetchResult:(id)arg1 observer:(id)arg2 presentationStyles:(unsigned long long)arg3 targetSize:(struct CGSize)arg4 screenScale:(double)arg5;

@end
