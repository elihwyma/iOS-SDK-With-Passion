/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainerSetupInfo, CKOperationConfiguration, CKOperationGroup, CKOperationMMCSRequestOptions, NSDictionary, NSString;

@interface CKOperationInfo : NSObject

{
    _Bool _isLongLived;
    _Bool _isOutstandingOperation;
    _Bool _wantsRequestStatistics;
    unsigned int _clientSDKVersion;
    CKOperationConfiguration *_resolvedConfiguration;
    NSString *_operationID;
    NSString *_name;
    NSString *_parentSectionID;
    CKContainerSetupInfo *_setupInfo;
    NSString *_operationClass;
    NSString *_deviceIdentifier;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
    CKOperationGroup *_group;
    CKOperationConfiguration *_perOpConfiguration;
    id _parentOperation;
    unsigned long long _duetPreClearedMode;
    unsigned long long _discretionaryWhenBackgroundedState;
    unsigned long long _systemScheduler;
}

@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property (nonatomic) unsigned long long systemScheduler;
@property (retain, nonatomic) NSString *operationID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *parentSectionID;
@property (nonatomic) _Bool isLongLived;
@property (nonatomic) _Bool isOutstandingOperation;
@property (retain, nonatomic) CKContainerSetupInfo *setupInfo;
@property (retain, nonatomic) NSString *operationClass;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) CKOperationGroup *group;
@property (retain, nonatomic) CKOperationConfiguration *perOpConfiguration;
@property (nonatomic) unsigned int clientSDKVersion;
@property (weak, nonatomic) id parentOperation;
@property (nonatomic, readonly) _Bool allowsCellularAccess;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) _Bool automaticallyRetryNetworkFailures;
@property (nonatomic, readonly) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic, readonly) _Bool preferAnonymousRequests;
@property (nonatomic, readonly) _Bool allowsBackgroundNetworking;
@property (nonatomic, readonly) double timeoutIntervalForRequest;
@property (nonatomic, readonly) double timeoutIntervalForResource;
@property (nonatomic, readonly) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, readonly) NSString *authPromptReason;
@property (nonatomic, readonly) _Bool shouldSkipZonePCSUpdate;
@property (nonatomic, readonly) _Bool isCloudKitSupportOperation;
@property (nonatomic) _Bool wantsRequestStatistics;
@property (nonatomic, readonly) CKOperationConfiguration *resolvedConfiguration;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)takeValuesFrom:(id)arg1;

@end
