/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@interface TransparencyQueryCache : NSObject

+ (id)lookupValidateRequest:(id)arg1 application:(id)arg2 uri:(id)arg3 accountID:(id)arg4 loggableDatas:(id)arg5 error:(id *)arg6;
+ (id)lookupValidateEnrollmentRequest:(id)arg1 application:(id)arg2 uri:(id)arg3 accountID:(id)arg4 loggableData:(id)arg5 error:(id *)arg6;
+ (id)lookupValidatePeerRequest:(id)arg1 application:(id)arg2 uri:(id)arg3 accountID:(id)arg4 loggableDatas:(id)arg5 error:(id *)arg6;

@end
