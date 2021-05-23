/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICFPSAPContext : NSObject

{
    struct FPSAPContextOpaque_ *_fairPlaySAPContext;
    struct FairPlayHWInfo_ _hardwareInfo;
}

- (void)dealloc;
- (_Bool)signData:(id)arg1 returningSignatureData:(id *)arg2 error:(id *)arg3;
- (id)initReturningError:(id *)arg1;
- (_Bool)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id *)arg3 exchangeStatus:(char *)arg4 error:(id *)arg5;
- (_Bool)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id *)arg3;

@end
