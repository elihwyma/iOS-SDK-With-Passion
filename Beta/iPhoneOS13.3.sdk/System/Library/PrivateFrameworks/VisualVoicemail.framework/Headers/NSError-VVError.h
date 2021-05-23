/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSError.h>

@interface NSError (VVError)

+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;

- (_Bool)isConnectivityError;
- (_Bool)isPasswordMismatchError;
- (_Bool)isInvalidSubscriberError;
- (_Bool)isServerError;
- (_Bool)isSecurityError;
- (_Bool)isEqualToError:(id)arg1;
- (_Bool)isStreamDomain:(long long)arg1 error:(int)arg2;
- (_Bool)isExpiredPasswordError;
- (_Bool)isNewPasswordError;
- (_Bool)shouldPresentErrorForTaskType:(long long)arg1;

@end
