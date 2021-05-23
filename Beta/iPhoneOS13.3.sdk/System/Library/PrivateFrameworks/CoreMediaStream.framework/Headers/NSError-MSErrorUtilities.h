/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSError.h>

@interface NSError (MSErrorUtilities)

+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;
+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

- (id)MSVerboseDescription;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;
- (_Bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)MSMakePrimaryError;
- (_Bool)MSIsTemporaryNetworkError;
- (_Bool)MSASStateMachineIsCanceledError;
- (id)MSFindPrimaryError;
- (_Bool)MSCanBeIgnored;
- (_Bool)MSNeedsBackoff;
- (_Bool)MSIsCounted;
- (_Bool)MSIsFatal;
- (_Bool)MSIsAuthError;
- (_Bool)MSIsBadTokenError;
- (_Bool)MSIsQuotaError;
- (_Bool)MSIsRegistrationError;
- (id)MSMMCSRetryAfterDate;
- (_Bool)MMCSIsNetworkConditionsError;
- (_Bool)MMCSIsAuthorizationError;
- (_Bool)MMCSIsFatalError;
- (void)_MMCSApplyBlock:(CDUnknownBlockType)arg1;
- (int)MMCSErrorType;
- (_Bool)MMCSIsCancelError;
- (id)MMCSRetryAfterDate;

@end
