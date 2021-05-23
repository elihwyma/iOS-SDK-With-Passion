/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer, UIView;

@protocol UIAutoscrollContainer;

@interface UIAutoscroll : NSObject

{
    id m_target;
    struct CGPoint m_point;
    UIView<UIAutoscrollContainer> *m_scrollContainer;
    int m_directions;
    double m_repeatInterval;
    NSTimer *m_timer;
    unsigned long long m_count;
    _Bool m_active;
    _Bool m_disabled;
    id _target;
}

@property (weak, nonatomic) id target;
@property (retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer;
@property (nonatomic) struct CGPoint point;
@property (nonatomic) int directions;
@property (nonatomic) double repeatInterval;
@property (nonatomic) unsigned long long count;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool disabled;

- (void)dealloc;
- (void)invalidate;
- (void)timerFired:(id)arg1;
- (_Bool)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5;

@end
