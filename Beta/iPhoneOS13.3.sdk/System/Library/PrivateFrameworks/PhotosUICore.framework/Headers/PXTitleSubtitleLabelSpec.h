/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXViewSpec.h>

@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec

{
    PXLabelSpec *_titleLabelSpec;
    PXLabelSpec *_subtitleLabelSpec;
    double _interLabelSpacing;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) PXLabelSpec *titleLabelSpec;
@property (retain, nonatomic) PXLabelSpec *subtitleLabelSpec;
@property (nonatomic) double interLabelSpacing;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic, readonly) double maximumTitleSubtitleHeight;

+ (id)px_headerTitleSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
