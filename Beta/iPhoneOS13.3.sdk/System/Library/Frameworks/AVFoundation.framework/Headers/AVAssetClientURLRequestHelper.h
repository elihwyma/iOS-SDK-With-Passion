/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoader, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVAssetClientURLRequestHelper : NSObject

{
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToAsset;
    CDUnknownBlockType _figAssetProvider;
    AVWeakReference *_weakReferenceToResourceLoader;
}

@property (copy, nonatomic) CDUnknownBlockType figAssetProvider;
@property (weak, nonatomic) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly) const struct OpaqueFigAsset *figAsset;

- (void)dealloc;
- (id)URLAsset;
- (id)initWithAsset:(id)arg1;

@end
