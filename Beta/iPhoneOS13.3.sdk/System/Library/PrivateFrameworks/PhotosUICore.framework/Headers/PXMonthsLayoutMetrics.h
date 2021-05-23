/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXMonthsLayoutMetrics : PXLayoutMetrics

{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultSectionAspectRatio;
    double _chapterHeaderHeight;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _chapterHeaderPadding;
}

@property (nonatomic) long long sizeClass;
@property (nonatomic) long long orientation;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double defaultSectionAspectRatio;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double chapterHeaderHeight;
@property (nonatomic) struct UIEdgeInsets chapterHeaderPadding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
