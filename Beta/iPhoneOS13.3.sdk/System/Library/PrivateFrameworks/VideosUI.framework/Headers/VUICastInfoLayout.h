/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICastInfoLayout : TVViewLayout

{
    VUITextLayout *_headerTextLayout;
    VUITextLayout *_textLayout;
}

@property (nonatomic, readonly) VUITextLayout *headerTextLayout;
@property (nonatomic, readonly) VUITextLayout *textLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
