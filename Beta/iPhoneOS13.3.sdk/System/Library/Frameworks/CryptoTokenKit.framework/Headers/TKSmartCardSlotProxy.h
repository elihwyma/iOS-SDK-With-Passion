/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSHashTable, TKSmartCardSlot;

__attribute__((visibility("hidden")))
@interface TKSmartCardSlotProxy : NSObject

{
    TKSmartCardSlot *_slot;
    NSHashTable *_cards;
}

@property (readonly) NSHashTable *cards;

- (id)initWithSlot:(id)arg1;
- (void)notifyWithParameters:(id)arg1;
- (void)cardSessionRequested;

@end
