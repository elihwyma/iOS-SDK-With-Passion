/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CKOperationGroup, HDAssertion, HDCloudSyncRepository, NSString, NSUUID;

@interface HDCloudSyncOperationConfiguration : NSObject

{
    HDCloudSyncRepository *_repository;
    CKOperationGroup *_operationGroup;
    NSString *_syncContainerPrefix;
    unsigned long long _options;
    long long _reason;
    NSUUID *_syncIdentifier;
    HDAssertion *_accessibilityAssertion;
}

@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (copy, nonatomic, readonly) NSString *syncContainerPrefix;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long reason;
@property (copy, nonatomic, readonly) NSUUID *syncIdentifier;
@property (nonatomic, readonly) HDAssertion *accessibilityAssertion;
@property (nonatomic, readonly) _Bool rebaseProhibited;

- (void)dealloc;
- (id)initWithRepository:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 options:(unsigned long long)arg4 reason:(long long)arg5 accessibilityAssertion:(id)arg6 syncIdentifier:(id)arg7;
- (id)descriptionForSignpost;
- (id)databaseForContainer:(id)arg1;
- (id)pushStoreWithIdentifier:(id)arg1 container:(id)arg2 error:(id *)arg3;
- (id)pushStoreIdentifierForContainer:(id)arg1 error:(id *)arg2;

@end
