/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface __NSCFSS : NSObject

{
    CDUnknownBlockType _capturedStreams;
    CDUnknownFunctionPointerType _trustEval;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)completeWithError:(id)arg1;
- (id)initWithTrustChallenge:(CDUnknownFunctionPointerType)arg1 capture:(CDUnknownBlockType)arg2;
- (_Bool)shouldTrust:(struct __SecTrust *)arg1;
- (void)connectionEstablished:(id)arg1 outputStream:(id)arg2;

@end
