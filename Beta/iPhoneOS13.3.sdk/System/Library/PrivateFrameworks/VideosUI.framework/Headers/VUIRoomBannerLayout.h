/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIRoomBannerLayout : TVViewLayout

{
    TVImageLayout *_backgroundImageLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_descriptionTextLayout;
}

@property (retain, nonatomic) TVImageLayout *backgroundImageLayout;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
