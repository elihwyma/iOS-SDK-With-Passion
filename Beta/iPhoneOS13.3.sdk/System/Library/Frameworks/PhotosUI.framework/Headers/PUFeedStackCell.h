/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class PUStackView;

__attribute__((visibility("hidden")))
@interface PUFeedStackCell : PUFeedCell

{
    PUStackView *_stackView;
    struct UIOffset _stackOffset;
}

@property (retain, nonatomic) PUStackView *stackView;
@property (nonatomic) struct UIOffset stackOffset;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
