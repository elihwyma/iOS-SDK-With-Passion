/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class CAMediaTimingFunction, NSString;

@protocol SCNJSBasicAnimationJSExport <Swift>

@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;
@property (copy) NSString *keyPath;
@property (getter=isAdditive) _Bool additive;
@property (getter=isCumulative) _Bool cumulative;
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

+ (unsigned short)animationWithKeyPath: /* Error: Ran out of types for this method. */;

@end
