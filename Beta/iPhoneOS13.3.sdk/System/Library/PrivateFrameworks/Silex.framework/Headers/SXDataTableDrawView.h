/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SXDataTableDrawView : UIView

{
    NSMutableArray *_drawBlocks;
}

@property (retain, nonatomic) NSMutableArray *drawBlocks;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPoint)originOffset;

@end
