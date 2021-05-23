/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation

{
    NSString *_webAuthToken;
    NSString *_APIToken;
}

@property (copy, nonatomic) NSString *webAuthToken;
@property (copy, nonatomic) NSString *APIToken;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;

@end
