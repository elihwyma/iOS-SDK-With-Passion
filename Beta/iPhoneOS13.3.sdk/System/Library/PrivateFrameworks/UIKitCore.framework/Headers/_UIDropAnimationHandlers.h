/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDropAnimationHandlers : NSObject <Swift>

{
    NSMutableArray *_alongsideAnimationHandlers;
    NSMutableArray *_completionHandlers;
}

@property (nonatomic, readonly) NSArray *alongsideAnimationHandlers;
@property (nonatomic, readonly) NSArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)invokeAllCompletionHandlers;
- (void)resetAllAnimationHandlers;

@end
