/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceFundingSourcesResponse : PKAccountWebServiceResponse

{
    NSArray *_fundingSources;
}

@property (copy, nonatomic, readonly) NSArray *fundingSources;

- (id)initWithData:(id)arg1;

@end
