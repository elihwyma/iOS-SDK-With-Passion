/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class NSString;

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase

{
    NSString *_merchantIdentifier;
    NSString *_hostApplicationIdentifier;
}

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;

- (id)bodyDictionary;
- (id)endpointName;

@end
