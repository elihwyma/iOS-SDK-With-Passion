/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject

{
    ISPurchaseReceipt *_purchaseReceipt;
    _Bool _isValid;
}

@property (readonly) _Bool isValid;
@property (readonly) _Bool isVPPLicensed;
@property (readonly) _Bool isRevoked;
@property (readonly) NSDate *expirationDate;

+ (id)receiptPathForProxy:(id)arg1;
+ (void)getReceiptPathWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (int)vppStateFlagsWithProxy:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1;
- (_Bool)receiptExpired;
- (id)initWithContainerPath:(id)arg1;

@end
