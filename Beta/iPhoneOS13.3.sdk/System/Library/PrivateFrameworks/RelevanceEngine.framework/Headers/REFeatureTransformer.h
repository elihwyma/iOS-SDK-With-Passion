/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REPriorityQueue, REUpNextTimer;

@protocol REFeatureTransformerInvalidationDelegate;

@interface REFeatureTransformer : NSObject

{
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    id <REFeatureTransformerInvalidationDelegate> _invalidationDelegate;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

+ (id)functionName;
+ (_Bool)supportsPersistence;
+ (_Bool)supportsInvalidation;
+ (id)maskAndShiftTransformWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2;
+ (id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (id)changedTransformWithImpulseDuration:(double)arg1;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(CDUnknownBlockType)arg4;
+ (id)featureTransformerClasses;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)arg1;
+ (id)logTransformerWithBase:(id)arg1;
+ (id)binaryTransformerWithThreshold:(id)arg1;
+ (id)roundTransformer;
+ (id)hashTransform;
+ (id)maskTransformWithWidth:(unsigned long long)arg1;
+ (id)changedTransform;
+ (id)recentTransformerWithCount:(unsigned long long)arg1;
+ (id)customCategoricalTransformerWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(CDUnknownBlockType)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_invalidate;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (void)invalidateWithContext:(id)arg1;
- (void)configureWithInvocation:(id)arg1;
- (id)_invalidationQueue;
- (void)_invalidationQueue_scheduleInvalidation:(id)arg1;
- (void)_performAndScheduleTimer;
- (void)setInvalidationDelegate:(id)arg1;
- (id)invalidationDelegate;

@end
