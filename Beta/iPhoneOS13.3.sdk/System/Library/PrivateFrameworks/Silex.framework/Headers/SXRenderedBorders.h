/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface SXRenderedBorders : NSObject

{
    UIImage *_top;
    UIImage *_bottom;
    UIImage *_left;
    UIImage *_right;
}

@property (retain, nonatomic) UIImage *top;
@property (retain, nonatomic) UIImage *bottom;
@property (retain, nonatomic) UIImage *left;
@property (retain, nonatomic) UIImage *right;

@end
