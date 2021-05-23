/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSError.h>

@interface NSError (PhotoVisionAdditions)

+ (id)errorForPhotoVisionUnimplementedFunction;
+ (id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)errorForPhotoVisionCancelledOperation;
+ (id)errorForPhotoVisionUnexpectedCondition:(id)arg1;
+ (id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 userInfo:(id)arg2;

@end
