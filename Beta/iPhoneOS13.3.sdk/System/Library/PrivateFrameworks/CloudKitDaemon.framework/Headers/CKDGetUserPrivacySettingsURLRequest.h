/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

__attribute__((visibility("hidden")))
@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest

{
    CKDPUserPrivacySettings *_userPrivacySettings;
}

@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

- (int)operationType;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end
