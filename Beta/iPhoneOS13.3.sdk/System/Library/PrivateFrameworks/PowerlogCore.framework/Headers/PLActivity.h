/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, PLActivityCriterion, PLEntry;

@protocol OS_dispatch_queue;

@interface PLActivity : NSObject

{
    _Bool _enabled;
    long long _state;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _activityBlock;
    CDUnknownBlockType _interruptBlock;
    NSArray *_criteria;
    PLActivityCriterion *_mustRunCriterion;
    PLEntry *_activityEntry;
    NSDate *_lastCompletedDate;
}

@property (nonatomic) long long state;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) CDUnknownBlockType activityBlock;
@property (copy) CDUnknownBlockType interruptBlock;
@property (retain) NSArray *criteria;
@property (retain) PLActivityCriterion *mustRunCriterion;
@property (retain) PLEntry *activityEntry;
@property (retain) NSDate *lastCompletedDate;
@property (readonly) NSString *identifier;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)workQueue;
+ (id)activityEntryKey;
+ (id)activityStatesEntryKey;

- (void)disable;
- (void)enable;
- (id)initWithIdentifier:(id)arg1 withCriteria:(id)arg2 withMustRunCriterion:(id)arg3 withQueue:(id)arg4 withInterruptBlock:(CDUnknownBlockType)arg5 withActivityBlock:(CDUnknownBlockType)arg6;
- (void)didChangeCriterion:(id)arg1;
- (void)syncWithDB;
- (_Bool)mustRunCriterionSatisfied;
- (void)runActivity;
- (_Bool)allCriteriaSatisfied;
- (void)interruptActivity;
- (void)logEntry;
- (id)criteriaString;
- (id)mustRunCriterionString;
- (void)enumerateCriteriaWithBlock:(CDUnknownBlockType)arg1;

@end
