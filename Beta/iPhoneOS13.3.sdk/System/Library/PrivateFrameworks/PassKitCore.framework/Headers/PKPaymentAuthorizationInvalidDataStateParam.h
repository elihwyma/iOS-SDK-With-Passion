/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSArray, NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam

{
    long long _dataType;
    long long _status;
    NSArray *_clientErrors;
    NSError *_error;
}

@property (nonatomic) long long dataType;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSArray *clientErrors;
@property (retain, nonatomic) NSError *error;

+ (id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 clientErrors:(id)arg4;

- (id)description;

@end
