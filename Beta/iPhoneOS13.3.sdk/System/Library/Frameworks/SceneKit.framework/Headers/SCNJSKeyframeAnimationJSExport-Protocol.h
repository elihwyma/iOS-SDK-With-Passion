/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@protocol SCNJSKeyframeAnimationJSExport <Swift>

@property (retain) id fromValue;
@property (retain) id toValue;
@property (retain) id byValue;
@property (copy) NSString *keyPath;
@property (getter=isAdditive) _Bool additive;
@property (getter=isCumulative) _Bool cumulative;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property (copy) NSArray *values;
@property struct CGPath *path;
@property double duration;
@property (copy) NSArray *keyTimes;
@property (copy) NSArray *timingFunctions;
@property (copy) NSString *calculationMode;
@property (copy) NSArray *tensionValues;
@property (copy) NSArray *continuityValues;
@property (copy) NSArray *biasValues;
@property double beginTime;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property _Bool autoreverses;
@property (copy) NSString *fillMode;

+ (unsigned short)animationWithKeyPath: /* Error: Ran out of types for this method. */;

@end
