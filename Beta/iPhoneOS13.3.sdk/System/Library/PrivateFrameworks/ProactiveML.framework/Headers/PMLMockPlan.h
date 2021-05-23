/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString, PMLTrainingStore;

@interface PMLMockPlan : NSObject

{
    PMLTrainingStore *_store;
    _Bool _returnValue;
    _Bool _didRun;
    struct NSString *_planId;
    unsigned long long _version;
}

@property (nonatomic, readonly) NSString *planId;
@property unsigned long long version;
@property (nonatomic, readonly) _Bool didRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setLastDeserializedPlanWithId:(struct NSString *)arg1 toPlan:(id)arg2;
+ (id)lastDeserializedPlanWithId:(struct NSString *)arg1;
+ (void)clearLastDeserializedPlans;
+ (id)lastDeserializedPlansMap;

- (id)initWithVersion:(unsigned long long)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
- (id)initWithPlanId:(struct NSString *)arg1;
- (id)initWithPlanId:(struct NSString *)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(_Bool)arg4;
- (id)initWithPlanId:(struct NSString *)arg1 version:(unsigned long long)arg2 returningAfterRunning:(_Bool)arg3;
- (id)initWithPlanId:(struct NSString *)arg1 version:(unsigned long long)arg2;
- (id)initWithPlanId:(struct NSString *)arg1 store:(id)arg2;

@end
