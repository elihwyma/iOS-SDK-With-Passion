/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement, UIScrollView;

__attribute__((visibility("hidden")))
@interface _TVNeedsMoreContentEvaluator : NSObject

{
    UIScrollView *_scrollView;
    long long _axis;
    long long _state;
    IKViewElement *_viewElement;
    double _threshold;
}

@property (nonatomic) long long state;
@property (nonatomic) double threshold;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) long long axis;
@property (retain, nonatomic) IKViewElement *viewElement;

- (id)init;
- (void)reset;
- (id)initWithScrollView:(id)arg1 axis:(long long)arg2;
- (void)evaluateForState:(long long)arg1;

@end
