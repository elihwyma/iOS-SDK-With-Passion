/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest

{
    CDUnknownBlockType _bundleIDsFetchedBlock;
}

@property (copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock;

- (int)operationType;
- (id)sourceApplicationBundleIdentifier;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)requiresTokenRegistration;

@end
