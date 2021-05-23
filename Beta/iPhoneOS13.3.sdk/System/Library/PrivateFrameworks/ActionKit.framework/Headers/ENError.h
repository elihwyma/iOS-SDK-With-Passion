/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface ENError : NSObject

+ (id)errorFromException:(id)arg1;
+ (id)connectionFailedError;
+ (id)noteSizeLimitReachedError;
+ (long long)sanitizedErrorCodeFromEDAMErrorCode:(int)arg1;
+ (id)localizedDescriptionForENErrorCode:(long long)arg1;

@end
