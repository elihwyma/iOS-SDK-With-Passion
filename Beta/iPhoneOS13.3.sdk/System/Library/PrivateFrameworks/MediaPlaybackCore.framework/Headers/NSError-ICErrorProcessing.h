/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSError.h>

@interface NSError (ICErrorProcessing)

+ (_Bool)_isAgeVerificationError:(id)arg1;
+ (id)errorForICError:(id)arg1 response:(id)arg2;
+ (id)MPCErrorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)MPCErrorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)_MPCErrorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescriptionFormat:(id)arg4 arguments:(char *)arg5;

@end
