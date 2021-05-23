/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKEventMetricInfo : NSObject

{
    _Bool _isCKInternalMetric;
    _Bool _isPushTriggerFired;
    _Bool _allowsCellularAccess;
    _Bool _preferAnonymousRequests;
    NSUUID *_metricUUID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    NSDictionary *_attributes;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}

@property (nonatomic, readonly) NSUUID *metricUUID;
@property (nonatomic, readonly) _Bool isCKInternalMetric;
@property (nonatomic, readonly) _Bool isPushTriggerFired;
@property (nonatomic, readonly) _Bool allowsCellularAccess;
@property (nonatomic, readonly) _Bool preferAnonymousRequests;
@property (nonatomic, readonly) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSDate *startTime;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperations;
@property (nonatomic, readonly) NSMutableDictionary *associatedOperationGroups;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventMetric:(id)arg1;

@end
