/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface SBGradientView : UIView

{
    NSArray *_colors;
}

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property struct CGPoint startPoint;
@property struct CGPoint endPoint;

+ (Class)layerClass;

- (id)color;

@end
