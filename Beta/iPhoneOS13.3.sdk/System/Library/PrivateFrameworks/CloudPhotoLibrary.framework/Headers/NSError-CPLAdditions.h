/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSError.h>

@interface NSError (CPLAdditions)

- (_Bool)isCPLError;
- (_Bool)isCPLErrorWithCode:(long long)arg1;
- (id)cplSafeErrorForXPC;
- (id)_cplSafeUserInfoForXPCDidChange:(_Bool *)arg1;
- (_Bool)isCPLOperationCancelledError;
- (_Bool)isCPLOperationDeferredError;
- (id)cplUnderlyingPOSIXError;
- (id)cplShortDomainDescription;

@end
