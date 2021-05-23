/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSString, SSPurchase, SSURLConnectionResponse;

@interface SSPurchaseResponse : NSObject

{
    _Bool _cancelsPurchaseBatch;
    NSArray *_downloadIdentifiers;
    NSError *_error;
    SSPurchase *_purchase;
    double _requestStartTime;
    SSURLConnectionResponse *_response;
    double _responseEndTime;
    double _responseStartTime;
    NSDictionary *_tidHeaders;
    NSMutableDictionary *_transactionIdentifiers;
}

@property (nonatomic) _Bool cancelsPurchaseBatch;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) SSPurchase *purchase;
@property (retain, nonatomic) SSURLConnectionResponse *URLResponse;
@property (copy, nonatomic) NSArray *downloadIdentifiers;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)downloadMetadataForItemIdentifier:(long long)arg1;
- (id)downloadsMetadata;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;
- (id)responseMetrics;

@end
