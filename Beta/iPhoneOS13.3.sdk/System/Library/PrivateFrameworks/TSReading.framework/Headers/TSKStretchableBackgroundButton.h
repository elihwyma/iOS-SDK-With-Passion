/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIButton.h>

@interface TSKStretchableBackgroundButton : UIButton

{
    long long mBackgroundTopCapHeight;
    long long mBackgroundLeftCapWidth;
}

@property (nonatomic) long long backgroundTopCapHeight;
@property (nonatomic) long long backgroundLeftCapWidth;

- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)awakeFromNib;
- (void)p_resetBackgroundImage;
- (void)setBackgroundTopLeftCapHeight:(long long)arg1 width:(long long)arg2;
- (void)guessBackgroundTopLeftCapSize;
- (void)p_resetBackgroundImageForState:(unsigned long long)arg1;

@end
