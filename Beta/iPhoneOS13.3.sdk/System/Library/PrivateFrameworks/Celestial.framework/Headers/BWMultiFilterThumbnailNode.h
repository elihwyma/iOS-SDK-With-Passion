/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWColorLookupCache, FigColorCubeMetalFilter, NSArray;

@interface BWMultiFilterThumbnailNode : BWNode

{
    struct CGSize _thumbnailSize;
    NSArray *_filters;
    BWColorLookupCache *_colorLookupCache;
    FigColorCubeMetalFilter *_filter;
    struct opaqueCMFormatDescription *_mostRecentFormatDescription;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)videoOutput;
- (int)_loadAndConfigureFilterBundle;
- (id)initWithFilters:(id)arg1 thumbnailSize:(struct CGSize)arg2;

@end
