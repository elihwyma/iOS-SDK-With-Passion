/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductInfoAiringLayout : TVViewLayout

{
    VUITextLayout *_infoTextLayout;
    TVImageLayout *_logoImageLayout;
}

@property (nonatomic, readonly) VUITextLayout *infoTextLayout;
@property (nonatomic, readonly) TVImageLayout *logoImageLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
