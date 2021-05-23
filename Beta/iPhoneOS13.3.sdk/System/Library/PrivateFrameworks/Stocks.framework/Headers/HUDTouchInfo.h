/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class UIImageView, UITouch, UIView;

@interface HUDTouchInfo : NSObject

{
    UITouch *_touch;
    UIImageView *_dot;
    UIView *_bar;
    struct CGPoint _plottedLocation;
    struct CGPoint _locationInHUD;
    CDStruct_d4d9707c _stockValue;
}

@property (nonatomic) CDStruct_d4d9707c stockValue;
@property (nonatomic) struct CGPoint plottedLocation;
@property (nonatomic) struct CGPoint locationInHUD;
@property (weak, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIImageView *dot;
@property (retain, nonatomic) UIView *bar;

- (id)description;

@end
