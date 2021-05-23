/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse

{
    NSDictionary *_aps;
    NSString *_action;
    NSString *_requestID;
}

@property (copy, nonatomic, readonly) NSDictionary *aps;
@property (copy, nonatomic, readonly) NSString *action;
@property (copy, nonatomic, readonly) NSString *requestID;

- (id)initWithData:(id)arg1;

@end
