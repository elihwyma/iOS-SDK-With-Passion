/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXAnimationTracker : NSObject

+ (void)scrollAnimationDidBegin:(long long)arg1;
+ (void)scrollAnimationDidEnd:(long long)arg1;
+ (void)_scrollAnimationOccurred:(long long)arg1 isBegin:(_Bool)arg2;
+ (void)transitionPreparationDidBegin:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)_transitionPreparationOccurred:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3 isBegin:(_Bool)arg4;
+ (void)transitionAnimationDidBegin:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)transitionAnimationDidEnd:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)_transitionAnimationOccurred:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3 isBegin:(_Bool)arg4;

@end
