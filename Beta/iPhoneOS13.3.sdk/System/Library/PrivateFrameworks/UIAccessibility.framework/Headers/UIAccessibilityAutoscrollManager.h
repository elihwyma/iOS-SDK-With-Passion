/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject

{
    _Bool _autoscrolling;
    UIScrollView *_scrollView;
    unsigned long long _scrollDirection;
    double _autoscrollSpeed;
}

@property (nonatomic, getter=isAutoscrolling) _Bool autoscrolling;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic) double autoscrollSpeed;
@property (retain, nonatomic) UIScrollView *scrollView;

+ (id)sharedInstance;

- (id)init;
- (void)pause;
- (void)_autoscroll;
- (void)autoscrollInDirection:(unsigned long long)arg1;
- (void)scrollToTop;
- (void)scrollToBottom;
- (unsigned long long)availableAutoscrollDirections;
- (void)incrementAutoscrollSpeed;
- (void)decrementAutoscrollSpeed;

@end
