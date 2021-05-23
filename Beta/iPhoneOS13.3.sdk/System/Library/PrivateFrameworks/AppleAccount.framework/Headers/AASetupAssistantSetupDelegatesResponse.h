/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSNumber, NSString;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse

@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;
@property (nonatomic, readonly) NSDictionary *responseParameters;
@property (nonatomic, readonly) NSString *dsid;

- (id)responseParametersForServiceIdentifier:(id)arg1;

@end
