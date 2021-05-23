/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle;

@interface FCTagBanner : NSObject

{
    FCAssetHandle *_assetHandle;
    struct CGSize _size;
    struct FCEdgeInsets _insets;
}

@property (nonatomic, readonly) FCAssetHandle *assetHandle;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct FCEdgeInsets insets;

- (id)initWithAssetHandle:(id)arg1 size:(struct CGSize)arg2 insets:(struct FCEdgeInsets)arg3;

@end
