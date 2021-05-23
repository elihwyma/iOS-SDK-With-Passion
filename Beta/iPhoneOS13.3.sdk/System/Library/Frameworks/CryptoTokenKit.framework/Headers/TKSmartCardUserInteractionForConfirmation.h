/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction

{
    _Bool _result;
    TKSmartCardSlot *_slot;
}

@property (weak) TKSmartCardSlot *slot;
@property _Bool result;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)runWithReply:(CDUnknownBlockType)arg1;

@end
