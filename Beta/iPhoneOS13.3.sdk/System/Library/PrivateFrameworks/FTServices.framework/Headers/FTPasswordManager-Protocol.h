/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol FTPasswordManager <Swift>

- (MISSING_TYPE *)acAccountWithProfileID:username:accountStore: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPasswordForProfileID:username:service:password:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchPasswordForProfileID:username:service:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)fetchAuthTokenForProfileID:username:service:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setAuthTokenForProfileID:username:service:authToken:selfHandle:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)requestAuthTokenForProfileID:username:service:badPassword:showForgotPassword:failIfNotSilent:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setAuthTokenForProfileID:username:service:authToken:selfHandle:accountStatus:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isAuthTokenReceiptTime:withinGracePeriod: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)requestPasswordForUsername:service:badPassword:showForgotPassword:shouldRememberPassword:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)requestAuthTokenForProfileID:username:service:badPassword:showForgotPassword:outRequestID:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)removeAuthTokenAllowingGracePeriodForProfileID:username: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setHandlesForProfileID:username:service:handles: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setAccountStatus:forProfileID:username:service: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelRequestID:serviceIdentifier: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)profileIDForACAccount: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cleanUpAccountsWithUsername:orProfileID:basedOnInUseUsernames:profileIDs:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cleanUpAccountsBasedOnInUseUsernames:profileIDs:completionBlock: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)performCleanUpWithCompletion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)updatePreviousUsername:toNewUsername: /* Error: Ran out of types for this method. */;

@end
