/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface SUMescalSession : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _complete;
    struct FairPlayHWInfo_ _hardwareInfo;
    struct FPSAPContextOpaque_ *_session;
}

@property (readonly, getter=isComplete) _Bool complete;

- (id)init;
- (void)dealloc;
- (id)signData:(id)arg1 error:(id *)arg2;
- (void)_teardownSession;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (id)primeForAccountCreationWithData:(id)arg1 error:(id *)arg2;
- (id)_newDataWithBytes:(char *)arg1 length:(unsigned int)arg2;

@end
