/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class SXStrokeStyle;

@interface SXSolidBorderView : UIView

{
    SXStrokeStyle *_strokeStyle;
}

@property (nonatomic, readonly) SXStrokeStyle *strokeStyle;

- (id)initWithStrokeStyle:(id)arg1;

@end
