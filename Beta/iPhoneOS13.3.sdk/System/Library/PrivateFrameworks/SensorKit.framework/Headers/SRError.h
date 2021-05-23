/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@interface SRError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)authorizationError;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)connectionNotFoundError;
+ (id)invalidEntitlementError;
+ (id)authorizationErrorWithStatus:(long long)arg1;

@end
