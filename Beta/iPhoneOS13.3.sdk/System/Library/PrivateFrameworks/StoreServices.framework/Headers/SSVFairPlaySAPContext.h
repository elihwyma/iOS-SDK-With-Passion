/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSVFairPlaySAPContext : NSObject

{
    _Bool _complete;
    struct FPSAPContextOpaque_ *_context;
    struct FairPlayHWInfo_ _hardwareInfo;
    long long _version;
}

@property (nonatomic, readonly, getter=isComplete) _Bool complete;

- (void)dealloc;
- (id)signData:(id)arg1 error:(id *)arg2;
- (void)_teardownSession;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (id)primingSignatureForData:(id)arg1 error:(id *)arg2;
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;
- (id)initWithSAPVersion:(long long)arg1;

@end
