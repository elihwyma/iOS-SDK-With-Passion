/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UICollectionViewCell.h>

@class OKWidgetView;

@interface OKWidgetGridViewCell : UICollectionViewCell

{
    OKWidgetView *_widgetView;
}

@property (retain, nonatomic) OKWidgetView *widgetView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
