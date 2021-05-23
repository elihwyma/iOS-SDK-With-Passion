/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, SXColumnLayout, SXDocumentController;

@interface SXImageController : NSObject

{
    NSDictionary *_imageResourcesGroupedByImageIdentifier;
    NSDictionary *_image2ResourcesGroupedByImageIdentifier;
    SXDocumentController *_documentController;
    SXColumnLayout *_columnLayout;
    NSMutableDictionary *_optimalImageResources;
    struct CGSize _viewportSize;
}

@property (weak, nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) NSDictionary *imageResourcesGroupedByImageIdentifier;
@property (nonatomic, readonly) NSDictionary *image2ResourcesGroupedByImageIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *optimalImageResources;

- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocumentController:(id)arg1 columnCalculator:(id)arg2;
- (id)allImageResources;
- (void)prepareImageResources;
- (void)determineOptimalImagesForComponents:(id)arg1;
- (void)determineOptimalImagesForComponentStyles:(id)arg1;
- (void)determineOptimalImagesForMetadata;
- (id)imageResourceForImageIdentifier:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (id)imageResourcesForComponent:(id)arg1;
- (id)imageResourceForImageComponent:(id)arg1;
- (id)imageResourceForScalableImageComponent:(id)arg1;
- (id)imageResourceForVideoComponent:(id)arg1;
- (id)imageResourceForAudioComponent:(id)arg1;
- (id)imageResourcesForGalleryComponent:(id)arg1;
- (id)imageResourceForDataTableComponent:(id)arg1;
- (struct CGSize)sizeConstraintForComponent:(id)arg1;
- (id)imageResourceForGalleryItem:(id)arg1;
- (id)imageResourcesForComponentStyle:(id)arg1;
- (id)imageResourceForImageFill:(id)arg1;
- (id)imageResourceForVideoFill:(id)arg1;
- (id)imageResourceForRepeatableImageFill:(id)arg1;
- (id)imageResourcesForImageIdentifier:(id)arg1;
- (id)largestImageResourceForImageIdentifier:(id)arg1;
- (id)taggedEquivalentOfImageResource:(id)arg1;
- (id)Image2ResourcesForImageIdentifier:(id)arg1;

@end
