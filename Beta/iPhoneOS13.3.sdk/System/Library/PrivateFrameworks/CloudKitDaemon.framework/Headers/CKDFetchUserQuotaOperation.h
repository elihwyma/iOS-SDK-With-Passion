/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

__attribute__((visibility("hidden")))
@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

{
    unsigned long long _quotaAvailable;
}

@property (nonatomic) unsigned long long quotaAvailable;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;

@end
