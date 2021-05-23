/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFavoriteViewLayout : TVViewLayout

{
    long long _layoutType;
    VUITextLayout *_titleTextLayout;
    TVImageLayout *_logoImageLayout;
    TVImageLayout *_accessoryImageLayout;
}

@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, readonly) VUITextLayout *titleTextLayout;
@property (nonatomic, readonly) TVImageLayout *logoImageLayout;
@property (nonatomic, readonly) TVImageLayout *accessoryImageLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)initWithType:(long long)arg1;

@end
