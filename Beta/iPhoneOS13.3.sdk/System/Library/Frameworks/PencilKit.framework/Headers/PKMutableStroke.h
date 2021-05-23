/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKStroke.h>

@class UIColor;

@interface PKMutableStroke : PKStroke

{
    UIColor *__color;
}

@property (copy, nonatomic) UIColor *_color;

- (void)_setColor:(id)arg1;
- (void)_applyTransform:(struct CGAffineTransform)arg1;
- (void)_setLocation:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;

@end
