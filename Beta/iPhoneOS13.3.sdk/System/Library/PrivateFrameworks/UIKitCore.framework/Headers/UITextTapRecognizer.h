/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer

{
    NSArray *_touchesForTap;
}

@property (retain, nonatomic) NSArray *touchesForTap;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
