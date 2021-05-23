/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSError.h>

@interface NSError (TSUAdditions)

@property (nonatomic, readonly) _Bool tsu_isOutOfSpaceError;
@property (nonatomic, readonly) _Bool tsu_isCancelError;
@property (nonatomic, readonly) _Bool tsu_isNoSuchFileError;
@property (nonatomic, readonly) _Bool tsu_isReadError;
@property (nonatomic, readonly) _Bool tsu_isCorruptedError;
@property (nonatomic, readonly) _Bool tsu_isWriteError;

+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithWarning:(id)arg1;

- (id)tsu_localizedAlertTitle;
- (id)tsu_localizedAlertMessage;
- (_Bool)tsu_isErrorPassingTest:(CDUnknownBlockType)arg1;
- (id)tsu_errorPreservingAlertTitle;
- (id)tsu_errorPreservingCancel;

@end
