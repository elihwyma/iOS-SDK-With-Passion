/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXYearsLayoutMetrics : PXLayoutMetrics

{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultItemAspectRatio;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) long long sizeClass;
@property (nonatomic) long long orientation;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double defaultItemAspectRatio;
@property (nonatomic) struct UIEdgeInsets padding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
