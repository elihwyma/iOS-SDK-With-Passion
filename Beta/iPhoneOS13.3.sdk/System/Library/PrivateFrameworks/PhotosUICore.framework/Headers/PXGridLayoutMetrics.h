/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXGridLayoutMetrics : PXLayoutMetrics

{
    _Bool _displaysHeaderTile;
    long long _axis;
    unsigned long long _additionalTileCount;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct CGSize _headerSize;
    struct CGSize _headerSpacing;
    struct CGSize _footerSize;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) long long axis;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct CGSize interItemSpacing;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) _Bool displaysHeaderTile;
@property (nonatomic) struct CGSize headerSize;
@property (nonatomic) struct CGSize headerSpacing;
@property (nonatomic) struct CGSize footerSize;
@property (nonatomic) unsigned long long additionalTileCount;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
