/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainer, CKSchedulerActivity, NSDictionary, NSString;

@protocol OS_xpc_object;

@interface CKOperationConfiguration : NSObject

{
    _Bool _allowsCellularAccess;
    _Bool _longLived;
    _Bool _preferAnonymousRequests;
    _Bool _automaticallyRetryNetworkFailures;
    _Bool _xpcActivityAutomaticallyDefer;
    _Bool _discretionarySchedulingForEntireOperation;
    _Bool _allowsBackgroundNetworking;
    _Bool _shouldSkipZonePCSUpdate;
    _Bool _isCloudKitSupportOperation;
    _Bool _hasContainer;
    _Bool _hasAllowsCellularAccess;
    _Bool _hasLongLived;
    _Bool _hasTimeoutIntervalForRequest;
    _Bool _hasTimeoutIntervalForResource;
    _Bool _hasAutomaticallyRetryNetworkFailures;
    _Bool _hasDiscretionaryNetworkBehavior;
    _Bool _hasXPCActivity;
    _Bool _hasXPCActivityAutomaticallyDefer;
    _Bool _hasSchedulerActivity;
    _Bool _hasDiscretionarySchedulingForEntireOperation;
    _Bool _hasPreferAnonymousRequests;
    _Bool _hasAllowsBackgroundNetworking;
    _Bool _hasSourceApplicationBundleIdentifier;
    _Bool _hasSourceApplicationSecondaryIdentifier;
    _Bool _hasAdditionalRequestHTTPHeaders;
    _Bool _hasShouldSkipZonePCSUpdate;
    _Bool _hasIsCloudKitSupportOperation;
    _Bool _hasQualityOfService;
    CKContainer *_container;
    long long _qualityOfService;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _discretionaryNetworkBehavior;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSDictionary *_additionalRequestHTTPHeaders;
    CKSchedulerActivity *_schedulerActivity;
}

@property (nonatomic) _Bool hasContainer;
@property (nonatomic) _Bool hasAllowsCellularAccess;
@property (nonatomic) _Bool hasLongLived;
@property (nonatomic) _Bool hasTimeoutIntervalForRequest;
@property (nonatomic) _Bool hasTimeoutIntervalForResource;
@property (nonatomic) _Bool hasAutomaticallyRetryNetworkFailures;
@property (nonatomic) _Bool hasDiscretionaryNetworkBehavior;
@property (nonatomic) _Bool hasXPCActivity;
@property (nonatomic) _Bool hasXPCActivityAutomaticallyDefer;
@property (nonatomic) _Bool hasSchedulerActivity;
@property (nonatomic) _Bool hasDiscretionarySchedulingForEntireOperation;
@property (nonatomic) _Bool hasPreferAnonymousRequests;
@property (nonatomic) _Bool hasAllowsBackgroundNetworking;
@property (nonatomic) _Bool hasSourceApplicationBundleIdentifier;
@property (nonatomic) _Bool hasSourceApplicationSecondaryIdentifier;
@property (nonatomic) _Bool hasAdditionalRequestHTTPHeaders;
@property (nonatomic) _Bool hasShouldSkipZonePCSUpdate;
@property (nonatomic) _Bool hasIsCloudKitSupportOperation;
@property (nonatomic) _Bool xpcActivityAutomaticallyDefer;
@property (nonatomic) _Bool discretionarySchedulingForEntireOperation;
@property (nonatomic) _Bool automaticallyRetryNetworkFailures;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;
@property (retain, nonatomic) CKSchedulerActivity *schedulerActivity;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) _Bool preferAnonymousRequests;
@property (retain, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) _Bool hasQualityOfService;
@property (nonatomic) _Bool shouldSkipZonePCSUpdate;
@property (nonatomic) _Bool allowsBackgroundNetworking;
@property (nonatomic) _Bool isCloudKitSupportOperation;
@property (retain, nonatomic) CKContainer *container;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) _Bool allowsCellularAccess;
@property (nonatomic, getter=isLongLived) _Bool longLived;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)resolveAgainstGenericConfiguration:(id)arg1;
- (void)setQualityOfServiceWithoutQoSChecks:(long long)arg1;
- (void)setAutomaticallyRetryNetworkFailuresIfNotSet:(_Bool)arg1;

@end
