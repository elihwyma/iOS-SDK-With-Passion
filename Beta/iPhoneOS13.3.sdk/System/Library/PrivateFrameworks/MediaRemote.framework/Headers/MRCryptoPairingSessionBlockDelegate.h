/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MRCryptoPairingSessionBlockDelegate : NSObject

{
    CDUnknownBlockType _dataExchangeBlock;
    CDUnknownBlockType _showSetupCodeBlock;
    CDUnknownBlockType _hideSetupCodeBlock;
    CDUnknownBlockType _promptForSetupCodeBlock;
    CDUnknownBlockType _exchangeCompleteBlock;
}

@property (copy, nonatomic) CDUnknownBlockType dataExchangeBlock;
@property (copy, nonatomic) CDUnknownBlockType showSetupCodeBlock;
@property (copy, nonatomic) CDUnknownBlockType hideSetupCodeBlock;
@property (copy, nonatomic) CDUnknownBlockType promptForSetupCodeBlock;
@property (copy, nonatomic) CDUnknownBlockType exchangeCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;
- (void)pairingSessionHideSetupCode:(id)arg1;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithCompletion:(CDUnknownBlockType)arg2;

@end
