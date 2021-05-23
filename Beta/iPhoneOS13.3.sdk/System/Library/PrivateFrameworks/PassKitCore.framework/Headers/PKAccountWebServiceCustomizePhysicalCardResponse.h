/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse

{
    NSArray *_artworkOptions;
    NSArray *_nameOptions;
    NSArray *_priceOptions;
}

@property (copy, nonatomic, readonly) NSArray *artworkOptions;
@property (copy, nonatomic, readonly) NSArray *nameOptions;
@property (copy, nonatomic, readonly) NSArray *priceOptions;

- (id)initWithData:(id)arg1;

@end
