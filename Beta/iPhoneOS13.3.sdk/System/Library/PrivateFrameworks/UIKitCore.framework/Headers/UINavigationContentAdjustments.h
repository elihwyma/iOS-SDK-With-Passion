/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UINavigationContentAdjustments : NSObject

{
    UIScrollView *_adjustedScrollView;
    struct UIEdgeInsets _insetAdjustment;
}

@property (weak, nonatomic) UIScrollView *adjustedScrollView;
@property (nonatomic) struct UIEdgeInsets insetAdjustment;

@end
