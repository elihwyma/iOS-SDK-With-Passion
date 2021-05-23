/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSNumber, NSString;

@interface AALoginDelegatesResponse : AAResponse

@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;
@property (nonatomic, readonly) NSDictionary *responseParameters;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *altDSID;

- (id)responseParametersForServiceIdentifier:(id)arg1;
- (id)augmentedResponseParametersForServiceIdentifier:(id)arg1 withAppleID:(id)arg2 password:(id)arg3 DSID:(id)arg4 altDSID:(id)arg5;

@end
