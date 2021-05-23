/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CALayer, UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject

{
    UIWebOverflowScrollView *_scrollView;
    CALayer *_scrollViewLayer;
    UIView *_oldSuperview;
}

@property (retain, nonatomic) UIWebOverflowScrollView *scrollView;
@property (retain, nonatomic) UIView *oldSuperview;

- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end
