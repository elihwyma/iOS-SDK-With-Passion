/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>

@class NSData, TKSmartCardPINFormat, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation

{
    TKSmartCardSlot *_slot;
    TKSmartCardPINFormat *_PINFormat;
    NSData *_APDU;
    long long _PINByteOffset;
}

@property (weak) TKSmartCardSlot *slot;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (retain) NSData *APDU;
@property long long PINByteOffset;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 PINByteOffset:(long long)arg4;
- (void)runWithReply:(CDUnknownBlockType)arg1;

@end
