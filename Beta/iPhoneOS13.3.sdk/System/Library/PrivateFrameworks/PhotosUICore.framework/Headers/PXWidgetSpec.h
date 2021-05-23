/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXWidgetSpec : PXFeatureSpec

{
    double _distanceBetweenMainContentBottomAndCaptionBaseline;
    unsigned long long _detailsOptions;
    double _distanceBetweenTopAndFirstHeaderBaseline;
    double _distanceBetweenTopAndHeaderlessWidgetContentTop;
    double _distanceBetweenHeaderBaselineAndWidgetContentTop;
    double _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
    double _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
    double _distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
    double _distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
    double _distanceBetweenWidgetContentBottomAndFooterBaseline;
    double _distanceBetweenFooterBaselineAndBottom;
    double _distanceBetweenFooterlessWidgetContentBottomAndBottom;
    double _distanceBetweenHeaderTopAndHeaderBaseline;
    double _distanceBetweenHeaderBaselineAndHeaderBottom;
    double _distanceBetweenFooterTopAndFooterBaseline;
    double _distanceBetweenFooterBaselineAndFooterBottom;
    struct UIEdgeInsets _contentGuideInsets;
}

@property (nonatomic) struct UIEdgeInsets contentGuideInsets;
@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic) double distanceBetweenTopAndFirstHeaderBaseline;
@property (nonatomic) double distanceBetweenTopAndHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenHeaderBaselineAndWidgetContentTop;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenWidgetContentBottomAndFooterBaseline;
@property (nonatomic) double distanceBetweenFooterBaselineAndBottom;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndBottom;
@property (nonatomic) double distanceBetweenHeaderTopAndHeaderBaseline;
@property (nonatomic) double distanceBetweenHeaderBaselineAndHeaderBottom;
@property (nonatomic) double distanceBetweenFooterTopAndFooterBaseline;
@property (nonatomic) double distanceBetweenFooterBaselineAndFooterBottom;
@property (nonatomic, readonly) double distanceBetweenMainContentBottomAndCaptionBaseline;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;

@end
