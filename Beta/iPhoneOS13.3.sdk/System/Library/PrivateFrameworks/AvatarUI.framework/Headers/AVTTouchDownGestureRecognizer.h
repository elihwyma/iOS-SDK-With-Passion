/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSHashTable, NSString;

@interface AVTTouchDownGestureRecognizer : UIGestureRecognizer

{
    _Bool _allowsTouchesToPassThrough;
    NSHashTable *_recognizersRequiredToFail;
}

@property (retain, nonatomic) NSHashTable *recognizersRequiredToFail;
@property (nonatomic) _Bool allowsTouchesToPassThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_configure;
- (void)requireGestureRecognizerToFail:(id)arg1;

@end
