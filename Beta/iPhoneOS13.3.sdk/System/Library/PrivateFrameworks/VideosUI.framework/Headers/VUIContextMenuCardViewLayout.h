/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIContextMenuCardViewLayout : TVViewLayout

{
    VUITextLayout *_titleTextViewLayout;
    VUITextLayout *_subTitleTextViewLayout;
    TVImageLayout *_coverImageViewLayout;
    TVImageLayout *_badgeImageViewLayout;
}

@property (retain, nonatomic) VUITextLayout *titleTextViewLayout;
@property (retain, nonatomic) VUITextLayout *subTitleTextViewLayout;
@property (retain, nonatomic) TVImageLayout *coverImageViewLayout;
@property (retain, nonatomic) TVImageLayout *badgeImageViewLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
