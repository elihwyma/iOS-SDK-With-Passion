/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSError.h>

@interface NSError (FMAdditions)

+ (id)fm_errorWithCode:(long long)arg1;
+ (id)fm_timeoutError;
+ (id)fm_cancelledError;
+ (id)fm_genericError;

- (_Bool)fm_isFileNotFoundError;
- (_Bool)fm_isCancelledError;
- (_Bool)fm_isTimeoutError;

@end
