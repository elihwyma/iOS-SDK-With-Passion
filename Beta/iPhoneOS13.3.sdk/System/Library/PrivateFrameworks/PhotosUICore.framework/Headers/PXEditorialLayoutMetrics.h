/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXEditorialLayoutMetrics : PXLayoutMetrics

{
    _Bool _useSaliency;
    _Bool _useNewImplementation;
    unsigned long long _numberOfColumns;
    double _interTileSpacing;
    double _headerHeight;
    unsigned long long _lowerItemCountThreshold;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double headerHeight;
@property (nonatomic) unsigned long long lowerItemCountThreshold;
@property (nonatomic) _Bool useSaliency;
@property (nonatomic) _Bool useNewImplementation;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
