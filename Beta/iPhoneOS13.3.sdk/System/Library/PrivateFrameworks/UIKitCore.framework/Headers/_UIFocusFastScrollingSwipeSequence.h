/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingSwipeSequence : NSObject

{
    UIScrollView *_scrollView;
    unsigned long long _headingLock;
    long long _consecutiveSwipeCount;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) unsigned long long headingLock;
@property (nonatomic) long long consecutiveSwipeCount;

@end
