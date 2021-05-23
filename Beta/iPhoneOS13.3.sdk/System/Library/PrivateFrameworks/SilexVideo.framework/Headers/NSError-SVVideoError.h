/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSError.h>

@interface NSError (SVVideoError)

+ (id)videoErrorWithErrorCode:(long long)arg1;
+ (long long)errorCodeForUnderlyingErrorDomain:(id)arg1;
+ (id)videoErrorWithUnderlyingError:(id)arg1;

@end
