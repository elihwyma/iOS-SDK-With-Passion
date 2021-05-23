/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIStoryboardUnwindChain : NSObject

{
    NSMutableArray *_viewControllers;
    unsigned long long _commonAncestorIdx;
    unsigned long long _modalAncestorContainingSourceIdx;
}

@property (nonatomic, readonly) UIViewController *commonAncestorViewController;
@property (nonatomic, readonly) UIViewController *modalAncestorContainingSourceViewController;

- (id)debugDescription;
- (id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2;
- (void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(CDUnknownBlockType)arg1;

@end
