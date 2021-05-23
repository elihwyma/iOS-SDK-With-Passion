/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest

{
    NSMutableArray *_passAppletStates;
    NSMutableArray *_transactionPassIDs;
    NSMutableArray *_transactionsBytes;
}

@property (retain, nonatomic) NSMutableArray *transactionsBytes;
@property (retain, nonatomic) NSMutableArray *transactionPassIDs;
@property (retain, nonatomic) NSMutableArray *passAppletStates;

+ (Class)transactionsBytesType;
+ (Class)transactionPassIDsType;
+ (Class)passAppletStatesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTransactionsBytes:(id)arg1;
- (void)addTransactionPassIDs:(id)arg1;
- (unsigned long long)transactionsBytesCount;
- (void)clearTransactionsBytes;
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionPassIDsCount;
- (void)clearTransactionPassIDs;
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;
- (void)addPassAppletStates:(id)arg1;
- (unsigned long long)passAppletStatesCount;
- (void)clearPassAppletStates;
- (id)passAppletStatesAtIndex:(unsigned long long)arg1;

@end
