/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceVirtualCardListResponse : PKAccountWebServiceResponse

{
    NSArray *_virtualCards;
}

@property (copy, nonatomic, readonly) NSArray *virtualCards;

- (id)initWithData:(id)arg1;

@end
