/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSError.h>

@interface NSError (TSPersistence)

+ (id)tsp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)errorWithTSKWarning:(id)arg1;

- (_Bool)tsp_isRecoverable;

@end
