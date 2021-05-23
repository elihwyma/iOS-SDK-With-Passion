/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface MKMaskContentView : UIView

{
    double _headerAlpha;
    double _headerHeight;
    double _headerOffset;
}

@property (nonatomic) double headerAlpha;
@property (nonatomic) double headerHeight;
@property (nonatomic) double headerOffset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;

@end
