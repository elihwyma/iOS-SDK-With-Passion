/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIComingSoonCardLayout : TVViewLayout

{
    VUITextLayout *_titleLayout;
    VUITextLayout *_textLayout;
    struct TVCornerRadii _borderRadii;
}

@property (nonatomic, readonly) VUITextLayout *titleLayout;
@property (nonatomic, readonly) VUITextLayout *textLayout;
@property (nonatomic) struct TVCornerRadii borderRadii;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
