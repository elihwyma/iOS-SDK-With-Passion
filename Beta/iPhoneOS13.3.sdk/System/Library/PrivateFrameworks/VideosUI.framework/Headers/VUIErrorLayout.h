/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIErrorLayout : TVViewLayout

{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_debugTextLayout;
    VUITextLayout *_debugTextLayout2;
}

@property (nonatomic, readonly) VUITextLayout *titleTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) VUITextLayout *debugTextLayout;
@property (nonatomic, readonly) VUITextLayout *debugTextLayout2;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;

@end
