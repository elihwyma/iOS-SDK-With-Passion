/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/NSLayoutManager.h>

@class NSAttributedString;

@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager

{
    struct CGSize _bulletSize;
    NSAttributedString *_bullet;
}

@property (copy, nonatomic) NSAttributedString *bullet;

- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;

@end
