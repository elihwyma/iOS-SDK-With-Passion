/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PULegacyViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec

{
    long long _fullMomentsSectionHeaderStyle;
}

@property (nonatomic, readonly) _Bool shouldUseAspectItems;
@property (nonatomic, readonly) double contentCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) long long fullMomentsSectionHeaderStyle;
@property (nonatomic, readonly) unsigned long long fullMomentsSectionHeaderBackgroundStyle;

+ (id)phoneSpec;
+ (id)padSpec;

- (long long)cellFillMode;
- (id)gridSpec;
- (void)configureCollectionViewGridLayout:(id)arg1;

@end
