/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)

+ (void)tsu_raiseWithError:(id)arg1;
+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;

- (id)tsu_error;
- (int)sfu_localErrno;

@end
