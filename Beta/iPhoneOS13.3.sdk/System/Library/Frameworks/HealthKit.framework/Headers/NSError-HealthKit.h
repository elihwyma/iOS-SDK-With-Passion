/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSError.h>

@interface NSError (HealthKit)

+ (id)hk_error:(long long)arg1 description:(id)arg2;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)hk_healthDataUnavailableError;
+ (id)hk_databaseInaccessibleBeforeFirstUnlockError;
+ (id)hk_protectedDataInaccessibilityError;
+ (id)hk_featureUnavailableForProfileError;
+ (id)hk_invalidProfileError;
+ (id)hk_databaseSchemaRolledBackError;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;
+ (id)hk_HTTPErrorRepresentingResponse:(id)arg1 request:(id)arg2;
+ (id)hk_HTTPErrorWithHTTPStatusCode:(long long)arg1 URLResponse:(id)arg2;
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_error:(long long)arg1;
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(out id *)arg3;
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;

- (_Bool)hk_isHealthKitError;
- (_Bool)hk_isHealthKitErrorWithCode:(long long)arg1;
- (_Bool)hk_isDatabaseAccessibilityError;
- (_Bool)hk_isDatabaseTransactionError;
- (_Bool)hk_isDatabaseSchemaRolledBackError;
- (_Bool)hk_isServiceDeviceNotFoundError;
- (_Bool)hk_isAuthorizationDeniedError;
- (_Bool)hk_isAuthorizationNotDeterminedError;
- (_Bool)hk_isInvalidArgumentError;
- (_Bool)hk_isInternalFailureError;
- (_Bool)hk_isRequiredAuthorizationError;
- (_Bool)hk_isStreamFailureError;
- (_Bool)hk_isTimeoutError;
- (_Bool)hk_isUserCanceledError;
- (_Bool)hk_isCocoaNoSuchFileError;
- (_Bool)hk_isXPCConnectionError;
- (_Bool)hk_isXPCConnectionInterruptedError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;
- (id)hk_sanitizedError;
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;
- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;
- (_Bool)hk_OAuth2_isOAuth2Error;
- (_Bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;
- (_Bool)hk_OAuth2_isAccessDeniedError;
- (_Bool)hk_OAuth2_isBearerAuthenticationError;

@end
