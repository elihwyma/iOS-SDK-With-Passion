/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <Swift>

{
    NSDate *_insertDate;
    PKPeerPaymentRecipient *_item;
}

@property (nonatomic, readonly) PKPeerPaymentRecipient *item;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (_Bool)hasExpired;
- (_Bool)isNewerThan:(id)arg1;

@end
