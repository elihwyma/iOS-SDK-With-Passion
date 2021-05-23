/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/NUFeedHeadlineCollectionViewCell.h>

@class NUCanvas;

@interface NUFeedHeadlineThumbnailRightCollectionViewCell : NUFeedHeadlineCollectionViewCell

{
    NUCanvas *_canvas;
}

@property (nonatomic, readonly) NUCanvas *canvas;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)buildCanvas;

@end
