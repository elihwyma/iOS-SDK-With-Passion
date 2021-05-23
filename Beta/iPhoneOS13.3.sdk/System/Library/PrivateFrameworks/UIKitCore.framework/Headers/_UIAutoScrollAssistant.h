/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, UIScrollView;

@protocol _UIAutoScrollBehavior;

__attribute__((visibility("hidden")))
@interface _UIAutoScrollAssistant : NSObject

{
    _Bool _started;
    UIScrollView *_scrollView;
    long long _mode;
    unsigned long long _allowedDirections;
    CADisplayLink *_displayLink;
    double _lastTimestamp;
    id <_UIAutoScrollBehavior> _behavior;
    struct CGPoint _point;
    struct CGPoint _referenceContentOffsetForPoint;
    struct UIEdgeInsets _touchInsets;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic, readonly) struct CGPoint point;
@property (nonatomic) struct CGPoint referenceContentOffsetForPoint;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) _Bool started;
@property (retain, nonatomic) id <_UIAutoScrollBehavior> behavior;
@property (weak, nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) long long mode;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic) struct UIEdgeInsets touchInsets;
@property (nonatomic) unsigned long long allowedDirections;

- (void)stop;
- (void)autoScrollFromPoint:(struct CGPoint)arg1;
- (id)initWithScrollView:(id)arg1;
- (void)setPoint:(struct CGPoint)arg1 forContentOffset:(struct CGPoint)arg2;
- (void)displayLinkFired:(id)arg1;
- (_Bool)_scrollContinuous;
- (void)_handleAutoScrollerWithContentOffset:(struct CGPoint)arg1 direction:(unsigned long long)arg2;
- (void)_adjustPointToCurrentContentOffset;

@end
