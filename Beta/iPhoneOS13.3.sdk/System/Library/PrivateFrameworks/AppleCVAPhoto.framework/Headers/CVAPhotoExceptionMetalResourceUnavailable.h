/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/CVAPhotoExceptionBase.h>

@interface CVAPhotoExceptionMetalResourceUnavailable : CVAPhotoExceptionBase

+ (id)error;
+ (id)throwIfNil:(id)arg1;

- (id)init;
- (id)getReasonStr;
- (int)getErrorCode;

@end
