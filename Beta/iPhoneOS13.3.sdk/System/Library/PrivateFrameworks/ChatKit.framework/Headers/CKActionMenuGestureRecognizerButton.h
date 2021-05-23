/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKActionMenuGestureRecognizer, NSDate, UIButton;

@protocol CKActionMenuGestureRecognizerButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKActionMenuGestureRecognizerButton : NSObject

{
    CKActionMenuGestureRecognizer *_gestureRecognizer;
    UIButton *_button;
    id <CKActionMenuGestureRecognizerButtonDelegate> _delegate;
    NSDate *_gestureDidBeginDate;
}

@property (retain, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSDate *gestureDidBeginDate;
@property (weak, nonatomic) id <CKActionMenuGestureRecognizerButtonDelegate> delegate;

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)arg1;

- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;
- (void)gestureRecognized:(id)arg1;
- (void)touchDownButton:(id)arg1;
- (void)touchUpInsideButton:(id)arg1;
- (void)touchUpOutsideButton:(id)arg1;

@end
