/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimation (SceneKitAdditions)

@property _Bool usesSceneTimeBase;
@property double fadeInDuration;
@property double fadeOutDuration;
@property (copy, nonatomic) NSArray *animationEvents;

+ (id)animationWithSCNAnimation:(id)arg1;

- (void)setCommitsOnCompletion:(_Bool)arg1;
- (_Bool)commitsOnCompletion;

@end
