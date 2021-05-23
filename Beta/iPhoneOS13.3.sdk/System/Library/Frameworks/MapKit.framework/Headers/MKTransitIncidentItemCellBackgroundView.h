/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentItemCellBackgroundView : UIView

{
    double _scale;
    double _cornerRadius;
    long long _position;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property (nonatomic) long long position;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;

@end
