/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCertifiedDeliveryReplayKey, NSData, NSDictionary, NSNumber, NSString;

@interface IDSCertifiedDeliveryContext : NSObject

{
    _Bool _generateDeliveryReceipt;
    NSString *_originalGUID;
    NSString *_service;
    long long _certifiedDeliveryVersion;
    NSData *_certifiedDeliveryRTS;
    NSData *_senderToken;
    NSNumber *_failureReason;
    NSString *_failureReasonMessage;
    IDSCertifiedDeliveryReplayKey *_replayKey;
    NSDictionary *_deliveryStatusContext;
    NSString *_localURI;
    NSString *_remoteURI;
    NSData *_queryHash;
}

@property (nonatomic, readonly) NSString *originalGUID;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) long long certifiedDeliveryVersion;
@property (nonatomic, readonly) NSData *certifiedDeliveryRTS;
@property (nonatomic, readonly) NSData *senderToken;
@property (nonatomic, readonly) NSNumber *failureReason;
@property (nonatomic, readonly) NSString *failureReasonMessage;
@property (nonatomic, readonly) IDSCertifiedDeliveryReplayKey *replayKey;
@property (nonatomic) _Bool generateDeliveryReceipt;
@property (retain, nonatomic) NSDictionary *deliveryStatusContext;
@property (nonatomic, readonly) NSString *localURI;
@property (nonatomic, readonly) NSString *remoteURI;
@property (nonatomic, readonly) NSData *queryHash;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 replayKey:(id)arg8 generateDeliveryReceipt:(_Bool)arg9 deliveryStatusContext:(id)arg10 localURI:(id)arg11 remoteURI:(id)arg12 queryHash:(id)arg13;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 replayKey:(id)arg8;
- (id)initWithCertifiedDeliveryContext:(id)arg1 queryHash:(id)arg2;

@end
