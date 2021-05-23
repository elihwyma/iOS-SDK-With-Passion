/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>

@class NSData, TKSmartCardPINFormat, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation

{
    unsigned long long _PINConfirmation;
    TKSmartCardSlot *_slot;
    TKSmartCardPINFormat *_PINFormat;
    NSData *_APDU;
    long long _currentPINByteOffset;
    long long _newPINByteOffset;
}

@property (weak) TKSmartCardSlot *slot;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (retain) NSData *APDU;
@property long long currentPINByteOffset;
@property long long newPINByteOffset;
@property unsigned long long PINConfirmation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(long long)arg4 newPINByteOffset:(long long)arg5;
- (void)runWithReply:(CDUnknownBlockType)arg1;

@end
