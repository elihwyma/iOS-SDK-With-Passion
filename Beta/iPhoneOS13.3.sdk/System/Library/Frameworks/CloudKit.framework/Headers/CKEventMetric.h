/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSDate, NSMutableDictionary, NSString, NSUUID;

@interface CKEventMetric : NSObject

{
    _Bool _hasBeenSubmitted;
    _Bool _inferredAllowsCellular;
    _Bool _inferredPreferAnonymousRequests;
    _Bool _isCKInternalMetric;
    _Bool _isPushTriggerFired;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    NSUUID *_metricUUID;
    NSString *_inferredSourceApplicationBundleIdentifier;
    NSString *_inferredSourceApplicationSecondaryIdentifier;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}

@property (nonatomic) _Bool hasBeenSubmitted;
@property (nonatomic, readonly) NSUUID *metricUUID;
@property (nonatomic) _Bool inferredAllowsCellular;
@property (nonatomic) _Bool inferredPreferAnonymousRequests;
@property (retain, nonatomic) NSString *inferredSourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *inferredSourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *attributes;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperations;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperationGroups;
@property (nonatomic) _Bool isCKInternalMetric;
@property (nonatomic) _Bool isPushTriggerFired;
@property (nonatomic, readonly) NSString *eventName;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithEventName:(id)arg1;
- (_Bool)associateWithCompletedOperation:(id)arg1;
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;
- (id)generateEventMetricInfo;
- (id)initWithEventName:(id)arg1 atTime:(id)arg2;

@end
