/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDictionary;

@interface SKReceiptRefreshRequest

{
    NSDictionary *_properties;
}

@property (nonatomic, readonly) NSDictionary *receiptProperties;

- (void)_start;
- (void)_handleReply:(id)arg1;
- (_Bool)_wantsExpired;
- (_Bool)_wantsRevoked;
- (_Bool)_wantsVPP;
- (id)initWithReceiptProperties:(id)arg1;

@end
