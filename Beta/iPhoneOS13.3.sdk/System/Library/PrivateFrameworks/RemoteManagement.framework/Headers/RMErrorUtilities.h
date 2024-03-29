/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@interface RMErrorUtilities : NSObject

+ (id)createUnhandledContentTypeErrorWithContentType:(id)arg1;
+ (id)createUnverifiedDownloadErrorWithURL:(id)arg1;
+ (id)createHTTPErrorWithStatusCode:(long long)arg1 reason:(id)arg2;
+ (id)_populateDescriptionInUserInfo:(id)arg1 descriptionKey:(id)arg2 arguments:(char *)arg3;
+ (id)_localizedDescriptionFormatWithKey:(id)arg1;
+ (id)_englishDescriptionFormatWithKey:(id)arg1;
+ (id)_loadEnglishStringsByKey;
+ (id)createErrorWithCode:(long long)arg1 userInfo:(id)arg2 descriptionKey:(id)arg3;
+ (id)_populateDescriptionInUserInfo:(id)arg1 descriptionKey:(id)arg2;
+ (id)createAccountAlreadyExistsErrorWithIdentifier:(id)arg1;
+ (id)createCannotChangeValueErrorForPropertyNamed:(id)arg1 onObject:(id)arg2;
+ (id)createConnectionNotEntitledWithName:(id)arg1;
+ (id)createDeviceIdentityNotFoundError;
+ (id)createIncorrectPayloadTypeErrorWithExpectedType:(id)arg1 actualType:(id)arg2;
+ (id)createInternalError;
+ (id)createManagementSourceNotFoundErrorWithAccountIdentifier:(id)arg1;
+ (id)createManagementSourceNotFoundErrorWithIdentifier:(id)arg1;
+ (id)createManagementSourceAlreadyExistsErrorWithAccountIdentifier:(id)arg1;
+ (id)createManagementSourceAlreadyExistsErrorWithURI:(id)arg1;
+ (id)createMismatchedValuesErrorForPropertyNamed:(id)arg1 onObject:(id)arg2 expected:(id)arg3 actual:(id)arg4;
+ (id)createMissingMandatoryPropertyErrorWithPropertyNamed:(id)arg1 onObject:(id)arg2;
+ (id)createMultipleErrorOrReturnTheSingleErrorWithErrors:(id)arg1;
+ (id)createMultipleValidationErrorOrReturnTheSingleErrorWithErrors:(id)arg1;
+ (id)createNotImplementedErrorForFeature:(id)arg1;
+ (id)createOrganizationProofInvalidError;
+ (id)createTooManyDeviceAuthenticatedManagementSourcesError;

@end
