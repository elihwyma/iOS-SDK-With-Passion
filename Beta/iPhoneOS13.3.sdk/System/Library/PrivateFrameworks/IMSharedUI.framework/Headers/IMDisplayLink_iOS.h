/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <IMSharedUI/IMDisplayLink.h>

@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink

{
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)invalidate;
- (_Bool)isValid;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)schedule;

@end
