/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMessage.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage

{
    _Bool _generateDeliveryReceipt;
    NSString *_originalGUID;
    NSData *_senderToken;
    NSData *_certifiedDeliveryRTS;
    long long _certifiedDeliveryVersion;
    NSNumber *_failureReason;
    NSString *_failureReasonMessage;
    NSDictionary *_generatedDeliveryStatusContext;
    NSString *_localURI;
    NSString *_remoteURI;
    NSData *_queryHash;
}

@property (retain, nonatomic) NSString *originalGUID;
@property (retain, nonatomic) NSData *senderToken;
@property (retain, nonatomic) NSData *certifiedDeliveryRTS;
@property (nonatomic) long long certifiedDeliveryVersion;
@property (retain, nonatomic) NSNumber *failureReason;
@property (retain, nonatomic) NSString *failureReasonMessage;
@property (nonatomic) _Bool generateDeliveryReceipt;
@property (retain, nonatomic) NSDictionary *generatedDeliveryStatusContext;
@property (retain, nonatomic) NSString *localURI;
@property (retain, nonatomic) NSString *remoteURI;
@property (retain, nonatomic) NSData *queryHash;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageBody;
- (long long)command;
- (long long)responseCommand;
- (id)requiredKeys;
- (id)initWithCertifiedDeliveryContext:(id)arg1;

@end
