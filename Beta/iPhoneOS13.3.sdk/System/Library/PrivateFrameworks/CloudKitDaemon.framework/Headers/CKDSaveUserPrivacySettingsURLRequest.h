/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

{
    NSString *_bundleID;
    long long _discoverableTrinary;
}

@property (nonatomic) long long discoverableTrinary;
@property (copy, nonatomic) NSString *bundleID;

- (id)init;
- (int)operationType;
- (long long)databaseScope;
- (void)setDiscoverable:(_Bool)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)requiresTokenRegistration;

@end
