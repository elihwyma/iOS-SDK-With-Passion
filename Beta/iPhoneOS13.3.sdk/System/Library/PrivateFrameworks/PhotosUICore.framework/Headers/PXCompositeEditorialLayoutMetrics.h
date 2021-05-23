/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics

{
    _Bool _useSaliency;
    double _interTileSpacing;
    PXCompositeEditorialLayoutSpec *_editorialLayoutSpec;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, readonly) PXCompositeEditorialLayoutSpec *editorialLayoutSpec;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) _Bool useSaliency;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
