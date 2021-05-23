/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class PHAsset, PHAssetResource;

__attribute__((visibility("hidden")))
@interface MiroAssetRequest : NSObject

{
    _Bool _isLocal;
    int _requestID;
    PHAsset *_asset;
    PHAssetResource *_resource;
    double _progress;
    double _sizeFactor;
}

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PHAssetResource *resource;
@property (nonatomic) int requestID;
@property (nonatomic) _Bool isLocal;
@property (nonatomic) double progress;
@property (nonatomic) double sizeFactor;

- (id)description;

@end
