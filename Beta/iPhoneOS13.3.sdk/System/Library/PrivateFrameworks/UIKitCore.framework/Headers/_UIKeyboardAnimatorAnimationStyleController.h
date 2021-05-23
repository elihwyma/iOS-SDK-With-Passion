/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, _UIKeyboardAnimator;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyleController : NSObject

{
    _UIKeyboardAnimator *_animator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAnimator:(id)arg1;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;

@end
