/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICollectionHeaderViewLayout : TVViewLayout

{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    TVImageLayout *_imageViewLayout;
}

@property (retain, nonatomic) TVImageLayout *imageViewLayout;
@property (nonatomic, readonly) VUITextLayout *titleTextLayout;
@property (nonatomic, readonly) VUITextLayout *subtitleTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
