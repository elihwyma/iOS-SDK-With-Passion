/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFeedbackTableLayout : TVViewLayout

{
    VUITextLayout *_headerTextLayout;
    VUITextLayout *_descriptionTextLayout;
    double _middleSpacing;
}

@property (nonatomic, readonly) VUITextLayout *headerTextLayout;
@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) double middleSpacing;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;
- (void)_setupLayout;

@end
