/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/CVAPhotoExceptionBase.h>

@class NSString;

@interface CVAPhotoExceptionThirdPartyAPIMismatch : CVAPhotoExceptionBase

{
    NSString *reasonStr;
}

- (id)initWithReason:(id)arg1;
- (id)getReasonStr;
- (int)getErrorCode;

@end
