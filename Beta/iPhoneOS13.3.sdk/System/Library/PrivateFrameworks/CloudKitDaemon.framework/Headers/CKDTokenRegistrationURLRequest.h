/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDTokenRegistrationURLRequest : CKDURLRequest

{
    NSData *_apsToken;
    NSString *_apsEnvironmentString;
    NSString *_bundleID;
}

@property (retain, nonatomic) NSData *apsToken;
@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSString *bundleID;

- (int)operationType;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)flowControlKey;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)requiresTokenRegistration;
- (id)initWithApsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3;

@end
