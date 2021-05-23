/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUISportsProductBannerLayout : TVViewLayout

{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_rowTextLayout;
    VUITextLayout *_scoreTextLayout;
    VUITextLayout *_losingRowTextLayout;
    VUITextLayout *_losingScoreTextLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_footerTextLayout;
    VUITextLayout *_availabilityTextLayout;
    TVImageLayout *_availabilityImageLayout;
}

@property (nonatomic, readonly) VUITextLayout *titleTextLayout;
@property (nonatomic, readonly) VUITextLayout *rowTextLayout;
@property (nonatomic, readonly) VUITextLayout *scoreTextLayout;
@property (nonatomic, readonly) VUITextLayout *losingRowTextLayout;
@property (nonatomic, readonly) VUITextLayout *losingScoreTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) VUITextLayout *footerTextLayout;
@property (nonatomic, readonly) VUITextLayout *availabilityTextLayout;
@property (nonatomic, readonly) TVImageLayout *availabilityImageLayout;

+ (_Bool)shouldUseVerticalLayout;
+ (_Bool)shouldDisplayScoresBelowLabels;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3;

- (id)init;
- (id)initWithSizeClass:(long long)arg1;

@end
