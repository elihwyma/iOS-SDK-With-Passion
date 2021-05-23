/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface PUAlbumListSeparatorView : UIView

{
    UIView *_separatorLine;
    UIColor *_lineColor;
}

@property (copy, nonatomic) UIColor *lineColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
