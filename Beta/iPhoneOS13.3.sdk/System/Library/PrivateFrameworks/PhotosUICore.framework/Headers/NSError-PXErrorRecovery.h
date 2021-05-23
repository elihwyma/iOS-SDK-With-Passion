/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSError.h>

@interface NSError (PXErrorRecovery)

+ (id)_px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 localizedDescription:(id)arg4 debugDescription:(id)arg5;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 localizedDescription:(id)arg4;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)px_genericErrorWithDebugDescription:(id)arg1;
+ (id)px_genericErrorWithUnderlyingError:(id)arg1 debugDescription:(id)arg2;

- (id)px_errorWithRecoveryOptions:(id)arg1;
- (id)px_errorWithRecoveryOptions:(id)arg1 preferredOptionIndex:(long long)arg2;

@end
