/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSArray, NSString;

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction

@property (nonatomic, readonly) unsigned long long accountType;
@property (copy, nonatomic, readonly) NSString *accountID;
@property (copy, nonatomic, readonly) NSString *accountPassword;
@property (copy, nonatomic, readonly) NSArray *accountTypesWithSharedCredentials;
@property (nonatomic, readonly) unsigned long long attemptCount;
@property (copy, nonatomic, readonly) NSString *requestMessage;
@property (copy, nonatomic, readonly) NSString *failureMessage;

+ (id)actionForFailedAttemptWithOriginalAction:(id)arg1 requestMessage:(id)arg2 failureMessage:(id)arg3;
+ (id)actionForInitialAttemptWithAccountType:(unsigned long long)arg1 requestMessage:(id)arg2;
+ (id)actionForFinishedRequestWithOriginalAction:(id)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4;
+ (id)actionForCancelledRequestWithOriginalAction:(id)arg1;

- (id)init;
- (id)_initWithAccountType:(unsigned long long)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 attemptCount:(unsigned long long)arg5 requestMessage:(id)arg6 failureMessage:(id)arg7;

@end
