/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIInputViewSetPlacement;

@protocol UIViewControllerAnimatedTransitioning_Keyboard, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerViewController : NSObject

{
    id <UIViewControllerContextTransitioning> _context;
    id <UIViewControllerAnimatedTransitioning_Keyboard> _animator;
    UIInputViewSetPlacement *_endPlacement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controllerWithContext:(id)arg1;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;

@end
