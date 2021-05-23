/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation

{
    NSArray *_bundleIDs;
}

@property (copy, nonatomic) NSArray *bundleIDs;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;

@end
