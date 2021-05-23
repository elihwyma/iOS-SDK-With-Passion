/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKPhysicalCard;

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse

{
    PKPhysicalCard *_physicalCard;
    unsigned long long _shipmentQuoteMinimum;
    unsigned long long _shipmentQuoteMaximum;
}

@property (nonatomic, readonly) PKPhysicalCard *physicalCard;
@property (nonatomic, readonly) unsigned long long shipmentQuoteMinimum;
@property (nonatomic, readonly) unsigned long long shipmentQuoteMaximum;

- (id)initWithData:(id)arg1;

@end
