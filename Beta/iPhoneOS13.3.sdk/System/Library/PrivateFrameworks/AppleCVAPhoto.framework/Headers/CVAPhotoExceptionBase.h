/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSException.h>

@interface CVAPhotoExceptionBase : NSException

- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)error;
- (void)log;
- (id)getReasonStr;
- (int)getErrorCode;

@end
