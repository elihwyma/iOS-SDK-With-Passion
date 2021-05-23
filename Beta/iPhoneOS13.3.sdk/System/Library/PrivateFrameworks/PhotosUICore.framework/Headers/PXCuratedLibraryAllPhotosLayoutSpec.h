/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class NSArray, PXCuratedLibraryInlineHeadersLayoutSpec;

@interface PXCuratedLibraryAllPhotosLayoutSpec : PXFeatureSpec

{
    _Bool _preferAspectFitContentMode;
    _Bool _useSaliency;
    _Bool _allowsAspectFit;
    long long _defaultNumberOfColumns;
    long long _initialNumberOfColumns;
    long long _maxColumnsForIndividualItems;
    double _interitemSpacing;
    double _aspectFitInteritemSpacing;
    long long _maxColumnsForSaliency;
    NSArray *_supportedColumns;
    PXCuratedLibraryInlineHeadersLayoutSpec *_inlineHeadersSpec;
    struct UIEdgeInsets _aspectFitEdgeMargins;
    struct UIEdgeInsets _squareEdgeMargins;
}

@property (nonatomic, readonly) long long defaultNumberOfColumns;
@property (nonatomic, readonly) long long initialNumberOfColumns;
@property (nonatomic, readonly) long long maxColumnsForIndividualItems;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) _Bool preferAspectFitContentMode;
@property (nonatomic, readonly) struct UIEdgeInsets aspectFitEdgeMargins;
@property (nonatomic, readonly) struct UIEdgeInsets squareEdgeMargins;
@property (nonatomic, readonly) double aspectFitInteritemSpacing;
@property (nonatomic, readonly) _Bool useSaliency;
@property (nonatomic, readonly) long long maxColumnsForSaliency;
@property (nonatomic, readonly) _Bool allowsAspectFit;
@property (nonatomic, readonly) NSArray *supportedColumns;
@property (nonatomic, readonly) PXCuratedLibraryInlineHeadersLayoutSpec *inlineHeadersSpec;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3;

@end
