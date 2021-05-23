/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)

+ (void)tsu_raiseWithError:(id)arg1;
+ (void)errnoRaise:(id)arg1 format:(id)arg2;

- (id)tsu_error;
- (int)localErrno;

@end
