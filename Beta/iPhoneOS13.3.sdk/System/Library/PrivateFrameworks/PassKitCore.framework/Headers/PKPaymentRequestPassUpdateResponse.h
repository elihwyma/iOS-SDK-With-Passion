/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString;

@interface PKPaymentRequestPassUpdateResponse

{
    NSString *_passURL;
    unsigned long long _appletState;
}

@property (copy, nonatomic, readonly) NSString *passURL;
@property (nonatomic, readonly) unsigned long long appletState;

- (id)initWithData:(id)arg1;

@end
