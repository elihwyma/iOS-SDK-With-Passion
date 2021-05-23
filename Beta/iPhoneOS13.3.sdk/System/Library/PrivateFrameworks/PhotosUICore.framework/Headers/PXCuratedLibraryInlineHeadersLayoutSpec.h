/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXCuratedLibraryInlineHeadersLayoutSpec : PXFeatureSpec

{
    unsigned long long _style;
    double _headerOffsetY;
    struct UIEdgeInsets _headerFloatMargins;
    struct UIEdgeInsets _headerContentMargins;
}

@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) struct UIEdgeInsets headerFloatMargins;
@property (nonatomic, readonly) struct UIEdgeInsets headerContentMargins;
@property (nonatomic, readonly) double headerOffsetY;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end
