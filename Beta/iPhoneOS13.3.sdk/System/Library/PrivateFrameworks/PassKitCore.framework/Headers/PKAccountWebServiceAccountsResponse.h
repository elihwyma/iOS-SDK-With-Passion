/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse

{
    NSArray *_accounts;
    NSString *_lastUpdated;
}

@property (copy, nonatomic, readonly) NSArray *accounts;
@property (copy, nonatomic, readonly) NSString *lastUpdated;

- (id)initWithData:(id)arg1;

@end
