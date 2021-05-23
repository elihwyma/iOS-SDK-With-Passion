/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface CAUITransportButton : UIButton

{
    int drawingStyle;
    struct CGColor *fillColor;
    struct CGRect imageRect;
}

@property int drawingStyle;
@property struct CGColor *fillColor;

+ (Class)layerClass;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)flash;
- (struct CGPath *)newPathRefForStyle:(int)arg1;

@end
