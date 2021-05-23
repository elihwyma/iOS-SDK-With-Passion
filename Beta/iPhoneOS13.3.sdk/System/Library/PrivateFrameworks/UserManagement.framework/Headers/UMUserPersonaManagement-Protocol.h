/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@class UMUserPersona;

@protocol UMUserPersonaManagement

@property (copy, nonatomic, readonly) UMUserPersona *currentPersona;

- (unsigned short)registerPersonaListUpdateObserver:withMachService:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createUserPersona:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserPersonaWithPersonaUniqueString:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPersonaWithType:CompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPersonaWithPersonaUniqueString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBundlesIdentifiers:forPersonaWithPersonaUniqueString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setMultiPersonaBundleIdentifiers:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchBundleIdentifierForPersonaWithPersonaUniqueString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMultiPersonaBundleIdentifierWithcompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)haveValidPersonaContextForPersonaUniqueString: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserPersonaWithIDString:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserPersonaWithProfileInfo:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserPersonaWithType:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)disableUserPersonaWithProfileInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllPersonasWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllPersonasForAllUsersWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPersonaWithIDString:CompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAsidMapOfAllUsersWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBundlesIdentifiers:forUniquePersonaWithIDString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBundlesIdentifiers:forUniquePersonaType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchBundleIdentifierForPersonaWithIDString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchBundleIdentifierForType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)haveValidPersonaContextForIDString: /* Error: Ran out of types for this method. */;
- (unsigned short)registerPersonaListUpdateObserver:completionHandler: /* Error: Ran out of types for this method. */;

@end
