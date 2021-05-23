/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@protocol SCNJSAnimationGroupJSExport <Swift>

@property (copy) NSArray *animations;
@property double duration;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property double beginTime;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property _Bool autoreverses;
@property (copy) NSString *fillMode;

@end
