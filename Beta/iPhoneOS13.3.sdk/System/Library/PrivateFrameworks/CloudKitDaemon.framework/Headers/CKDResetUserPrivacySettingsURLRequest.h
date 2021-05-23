/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (int)operationType;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)requiresTokenRegistration;

@end
