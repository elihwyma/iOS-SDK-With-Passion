/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView

{
    NSArray *_iconImages;
    double _iconPadding;
    struct CGPoint _drawingOffset;
}

@property (retain, nonatomic) NSArray *iconImages;
@property (nonatomic) double iconPadding;
@property (nonatomic) struct CGPoint drawingOffset;

- (void)drawRect:(struct CGRect)arg1;
- (double)preferredWidth;

@end
