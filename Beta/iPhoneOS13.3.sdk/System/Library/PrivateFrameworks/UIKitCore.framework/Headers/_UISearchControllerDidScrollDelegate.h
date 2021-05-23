/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIScrollView;

@protocol _UIScrollViewScrollObserver_Internal;

__attribute__((visibility("hidden")))
@interface _UISearchControllerDidScrollDelegate : NSObject

{
    id <_UIScrollViewScrollObserver_Internal> _controller;
    UIScrollView *_scrollView;
}

@property (weak, nonatomic) id <_UIScrollViewScrollObserver_Internal> controller;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_didScroll;
- (void)_observeScrollViewDidScroll:(id)arg1;

@end
