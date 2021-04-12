//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ASDPurchase, NSArray, NSDictionary, NSError;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding>
{
    BOOL _success;
    BOOL _cancelsPurchaseBatch;
    NSError *_error;
    ASDPurchase *_purchase;
    NSArray *_results;
    double _requestStartTime;
    double _responseEndTime;
    double _responseStartTime;
    NSDictionary *_responseMetrics;
    NSDictionary *_transationIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *transationIDs; // @synthesize transationIDs=_transationIDs;
@property(readonly, nonatomic) NSDictionary *responseMetrics; // @synthesize responseMetrics=_responseMetrics;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) BOOL cancelsPurchaseBatch; // @synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) ASDPurchase *purchase; // @synthesize purchase=_purchase;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (void)_setTransactionIDs:(id)arg1;
- (void)_setSuccess:(BOOL)arg1;
- (void)_setResponseMetrics:(id)arg1;
- (void)_setPurchase:(id)arg1;
- (void)_setError:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;
- (id)description;
- (id)initWithResults:(id)arg1;
- (id)init;

@end

