/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKStackingViewControllerHeaderView : UIView

{
    _MKUILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
