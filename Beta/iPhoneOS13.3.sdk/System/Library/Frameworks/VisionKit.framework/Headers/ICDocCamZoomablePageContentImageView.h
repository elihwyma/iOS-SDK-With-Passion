/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIImageView.h>

@protocol ICDocCamZoomablePageContentViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamZoomablePageContentImageView : UIImageView

{
    id <ICDocCamZoomablePageContentViewDelegate> _pageContentViewDelegate;
}

@property (weak, nonatomic) id <ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;

@end
