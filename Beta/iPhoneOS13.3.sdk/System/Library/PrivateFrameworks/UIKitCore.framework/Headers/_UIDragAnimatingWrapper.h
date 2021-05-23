/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIDragAnimatingWrapper : NSObject <Swift>

{
    UIViewPropertyAnimator *_animator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)_api_addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPropertyAnimator:(id)arg1;

@end
