/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface UIButton (TSDUIButton)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tsdPlatformButtonWithFrame:(struct CGRect)arg1;

- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setAlternateImageNamed:(id)arg1 inBundle:(id)arg2;

@end
