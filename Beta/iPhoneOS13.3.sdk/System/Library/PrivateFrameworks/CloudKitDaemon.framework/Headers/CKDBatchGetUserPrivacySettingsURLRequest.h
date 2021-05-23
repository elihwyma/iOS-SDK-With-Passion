/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest

{
    NSArray *_containerPrivacySettings;
}

@property (retain, nonatomic) NSArray *containerPrivacySettings;

- (int)operationType;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)requiresTokenRegistration;

@end
