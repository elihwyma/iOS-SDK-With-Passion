/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UISearchBarLayout;

__attribute__((visibility("hidden")))
@interface _UISearchBarTransitionContext : NSObject

{
    _UISearchBarLayout *_toLayout;
    _UISearchBarLayout *_fromLayout;
}

@property (copy, nonatomic) _UISearchBarLayout *toLayout;
@property (copy, nonatomic) _UISearchBarLayout *fromLayout;

@end
