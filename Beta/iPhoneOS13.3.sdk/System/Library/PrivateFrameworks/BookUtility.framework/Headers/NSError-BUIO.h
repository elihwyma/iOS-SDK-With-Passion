/*
 Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

#import <Foundation/NSError.h>

@interface NSError (BUIO)

@property (nonatomic, readonly) _Bool bu_isReadError;
@property (nonatomic, readonly) _Bool bu_isCorruptedError;
@property (nonatomic, readonly) _Bool bu_isWriteError;
@property (nonatomic, readonly) _Bool bu_isOutOfSpaceError;
@property (nonatomic, readonly) _Bool bu_isCancelError;
@property (nonatomic, readonly) _Bool bu_isNoSuchFileError;
@property (nonatomic, readonly) _Bool bu_isNoPermissionError;

+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)bu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)bu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;
+ (id)bu_IOErrorWithCode:(long long)arg1;
+ (id)bu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)bu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)bu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)bu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)bu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)bu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;

- (void)bu_enumerateErrorUsingBlock:(CDUnknownBlockType)arg1;
- (void)bu_enumerateErrorUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)bu_isErrorPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)bu_isErrorPassingTest:(CDUnknownBlockType)arg1;
- (id)bu_errorPreservingAlertTitle;
- (id)bu_errorPreservingCancel;
- (id)bu_localizedAlertTitle;
- (id)bu_localizedAlertMessage;

@end
