/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class ASDPurchase, NSArray, NSDictionary, NSError;

@interface ASDPurchaseResponseItem : NSObject <Swift>

{
    _Bool _success;
    _Bool _cancelsPurchaseBatch;
    NSError *_error;
    ASDPurchase *_purchase;
    NSArray *_results;
    double _requestStartTime;
    double _responseEndTime;
    double _responseStartTime;
    NSDictionary *_responseMetrics;
    NSDictionary *_transationIDs;
}

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic, readonly) NSDictionary *responseMetrics;
@property (nonatomic, readonly) NSDictionary *transationIDs;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) ASDPurchase *purchase;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) _Bool cancelsPurchaseBatch;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setError:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;
- (void)_setPurchase:(id)arg1;
- (void)_setResponseMetrics:(id)arg1;
- (void)_setSuccess:(_Bool)arg1;
- (void)_setTransactionIDs:(id)arg1;

@end
