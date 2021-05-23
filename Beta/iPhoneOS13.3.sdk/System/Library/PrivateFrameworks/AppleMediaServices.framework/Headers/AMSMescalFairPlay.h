/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMescalFairPlay : NSObject

{
    _Bool _complete;
    struct FPSAPContextOpaque_ *_context;
    struct FairPlayHWInfo_ _hardwareInfo;
    long long _mescalType;
}

@property (nonatomic, readonly, getter=isComplete) _Bool complete;

- (void)dealloc;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)_dataWithFairPlayBytes:(const char *)arg1 length:(unsigned int)arg2;
- (void)_teardownSession;
- (id)initWithMescalType:(long long)arg1;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (id)primingSignatureForData:(id)arg1 error:(id *)arg2;
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;

@end
