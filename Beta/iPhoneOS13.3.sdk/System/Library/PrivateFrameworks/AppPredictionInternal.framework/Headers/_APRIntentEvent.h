/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXAction, INIntent, NSDateInterval, NSString;

@interface _APRIntentEvent : NSObject

{
    NSString *_intentType;
    NSString *_bundleId;
    NSDateInterval *_dateInterval;
    INIntent *_intent;
    ATXAction *_action;
    NSString *_arg1;
    NSString *_arg2;
}

@property (copy, nonatomic, readonly) NSString *intentType;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) INIntent *intent;
@property (copy, nonatomic, readonly) ATXAction *action;
@property (copy, nonatomic) NSString *arg1;
@property (copy, nonatomic) NSString *arg2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)startDate;
- (id)endDate;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 intent:(id)arg4;
- (id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 action:(id)arg4;
- (_Bool)isEqualToAPRIntentEvent:(id)arg1;

@end
