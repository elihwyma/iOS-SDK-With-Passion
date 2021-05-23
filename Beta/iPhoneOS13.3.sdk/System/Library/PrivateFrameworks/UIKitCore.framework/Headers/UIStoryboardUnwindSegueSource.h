/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIViewController;

@interface UIStoryboardUnwindSegueSource : NSObject

{
    NSMutableArray *_searchChain;
    UIViewController *_sourceViewController;
    SEL _unwindAction;
    id _sender;
}

@property (readonly) UIViewController *sourceViewController;
@property (readonly) SEL unwindAction;
@property (readonly) id sender;

- (id)init;
- (id)_childContainingUnwindSourceForViewController:(id)arg1;
- (id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3;
- (id)_findDestination;

@end
