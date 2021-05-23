/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse

{
    _Bool _success;
    NSString *_displayName;
}

@property (nonatomic, readonly) _Bool success;
@property (copy, nonatomic, readonly) NSString *displayName;

- (id)initWithData:(id)arg1;

@end
