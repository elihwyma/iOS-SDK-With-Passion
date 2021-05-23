/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class C2MetricOptions, CKOperationMMCSRequestOptions, NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSRequestOptions : NSObject

{
    _Bool _allowsCellularAccess;
    _Bool _allowsPowerNapScheduling;
    _Bool _resolvedAutomaticallyRetryNetworkFailures;
    long long _databaseScope;
    long long _containerEnvironment;
    NSString *_topmostParentOperationID;
    NSString *_topmostParentOperationGroupID;
    NSString *_applicationBundleID;
    NSString *_applicationSecondaryID;
    NSString *_containerID;
    NSArray *_zoneNames;
    NSString *_deviceHardwareID;
    NSData *_authPutResponse;
    NSDictionary *_authPutResponseHeaders;
    long long _qualityOfService;
    long long _queuePriority;
    unsigned long long _resolvedDiscretionaryNetworkBehavior;
    unsigned long long _duetPreClearedMode;
    C2MetricOptions *_metricOptions;
    unsigned long long _networkServiceType;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
}

@property (nonatomic) long long databaseScope;
@property (nonatomic) long long containerEnvironment;
@property (retain, nonatomic) NSString *topmostParentOperationID;
@property (retain, nonatomic) NSString *topmostParentOperationGroupID;
@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *applicationSecondaryID;
@property (retain, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSString *deviceHardwareID;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) _Bool allowsCellularAccess;
@property (nonatomic) _Bool allowsPowerNapScheduling;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long queuePriority;
@property (nonatomic) _Bool resolvedAutomaticallyRetryNetworkFailures;
@property (nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (retain, nonatomic) C2MetricOptions *metricOptions;
@property (nonatomic) unsigned long long networkServiceType;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;

- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)usesBackgroundSession;
- (id)initWithOperation:(id)arg1;
- (id)MMCSOptions;

@end
