/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIMediaTagsViewLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductBannerLayout : TVViewLayout

{
    long long _sizeClass;
    unsigned long long _contentType;
    TVImageLayout *_logoImageLayout;
    VUITextLayout *_logoTextLayout;
    TVImageLayout *_decorationImageLayout;
    VUITextLayout *_subTextLayout;
    VUITextLayout *_episodeInfoTextLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_descriptionTitleTextLayout;
    VUIMediaTagsViewLayout *_tagsLayout;
    VUIMediaTagsViewLayout *_infoTagsLayout;
    TVImageLayout *_coverArtImageLayout;
    double _maxCoverArtImageHeight;
    VUITextLayout *_disclaimerTextLayout;
    VUITextLayout *_availabilityTextLayout;
    TVImageLayout *_availabilityImageLayout;
}

@property (retain, nonatomic) TVImageLayout *logoImageLayout;
@property (retain, nonatomic) VUITextLayout *logoTextLayout;
@property (retain, nonatomic) TVImageLayout *coverArtImageLayout;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) TVImageLayout *decorationImageLayout;
@property (nonatomic, readonly) VUITextLayout *subTextLayout;
@property (nonatomic, readonly) VUITextLayout *episodeInfoTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTitleTextLayout;
@property (nonatomic, readonly) VUIMediaTagsViewLayout *tagsLayout;
@property (nonatomic, readonly) VUIMediaTagsViewLayout *infoTagsLayout;
@property (nonatomic, readonly) double maxCoverArtImageHeight;
@property (nonatomic, readonly) VUITextLayout *disclaimerTextLayout;
@property (nonatomic, readonly) VUITextLayout *availabilityTextLayout;
@property (nonatomic, readonly) TVImageLayout *availabilityImageLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 contentType:(unsigned long long)arg4;
+ (id)_coverArtImageShadow;

- (void)updateWithSizeClass:(long long)arg1 contentSizeCategoryIsAccessibility:(_Bool)arg2;
- (id)initWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2;
- (void)_createLayoutsWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2;

@end
