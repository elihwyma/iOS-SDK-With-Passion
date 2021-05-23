/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSError.h>

@interface NSError (NAErrors)

+ (id)na_genericError;
+ (id)na_timeoutError;
+ (id)na_errorWithCode:(unsigned long long)arg1;
+ (id)na_cancelledError;

- (_Bool)na_isTimeoutError;
- (_Bool)na_isCancelledError;

@end
