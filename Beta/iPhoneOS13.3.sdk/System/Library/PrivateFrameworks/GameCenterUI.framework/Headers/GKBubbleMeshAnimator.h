/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface GKBubbleMeshAnimator : NSObject

{
    NSMutableSet *_animatingViews;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

@property (retain, nonatomic) NSMutableSet *animatingViews;
@property (nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastUpdateTime;

+ (id)sharedAnimator;

- (id)init;
- (void)dealloc;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)update:(id)arg1;
- (void)addAnimatingBubbleView:(id)arg1;
- (void)removeAnimatingBubbleView:(id)arg1;

@end
