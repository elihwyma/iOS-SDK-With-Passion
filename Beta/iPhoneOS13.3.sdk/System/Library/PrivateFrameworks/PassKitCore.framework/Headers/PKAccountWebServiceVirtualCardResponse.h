/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKVirtualCard;

@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse

{
    PKVirtualCard *_virtualCard;
}

@property (copy, nonatomic, readonly) PKVirtualCard *virtualCard;

- (id)initWithData:(id)arg1;

@end
