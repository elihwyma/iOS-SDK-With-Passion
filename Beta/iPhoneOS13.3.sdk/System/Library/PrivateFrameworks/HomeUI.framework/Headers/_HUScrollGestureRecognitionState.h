/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIGestureRecognizer;

@protocol NACancelable;

@interface _HUScrollGestureRecognitionState : NSObject

{
    UIGestureRecognizer *_gestureRecognizer;
    id <NACancelable> _activationTimer;
}

@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) id <NACancelable> activationTimer;

- (id)initWithGestureRecognizer:(id)arg1;

@end
