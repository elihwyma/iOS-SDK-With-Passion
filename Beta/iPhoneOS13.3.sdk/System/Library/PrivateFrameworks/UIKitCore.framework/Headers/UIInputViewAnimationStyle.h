/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject <Swift>

{
    _Bool animated;
    double duration;
    unsigned long long extraOptions;
    _Bool interactivelyCancelled;
    _Bool _isLegacy;
    _Bool force;
    _Bool _dontMerge;
}

@property (nonatomic) _Bool force;
@property (nonatomic) _Bool animated;
@property (nonatomic) _Bool dontMerge;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long extraOptions;
@property (nonatomic) _Bool interactivelyCancelled;
@property (nonatomic, readonly) _Bool isAnimationCompleted;
@property (nonatomic, readonly) _Bool canDismissWithScrollView;

+ (id)animationStyleImmediate;
+ (id)animationStyleDefault;
+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)endPlacementForInputViewSet:(id)arg1;
- (id)legacyAnimationCopy;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;

@end
