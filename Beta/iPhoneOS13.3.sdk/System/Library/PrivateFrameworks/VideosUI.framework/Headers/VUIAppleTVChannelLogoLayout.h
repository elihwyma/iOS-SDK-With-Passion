/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIAppleTVChannelLogoLayout : TVViewLayout

{
    TVImageLayout *_channelLogoImageLayout;
    VUITextLayout *_channelsTextLayout;
}

@property (retain, nonatomic) VUITextLayout *channelsTextLayout;
@property (retain, nonatomic) TVImageLayout *channelLogoImageLayout;

+ (id)layoutWithLayout:(id)arg1;

- (id)init;

@end
