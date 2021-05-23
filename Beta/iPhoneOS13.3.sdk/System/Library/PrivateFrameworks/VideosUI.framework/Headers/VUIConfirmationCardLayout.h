/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIConfirmationCardLayout : TVViewLayout

{
    TVImageLayout *_badgeLayout;
    VUITextLayout *_textLayout;
    struct TVCornerRadii _borderRadii;
}

@property (nonatomic) struct TVCornerRadii borderRadii;
@property (nonatomic, readonly) TVImageLayout *badgeLayout;
@property (nonatomic, readonly) VUITextLayout *textLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
