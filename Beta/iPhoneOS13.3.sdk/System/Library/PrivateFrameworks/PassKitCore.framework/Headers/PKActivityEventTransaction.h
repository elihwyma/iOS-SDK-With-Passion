/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

{
    PKPaymentTransaction *_transaction;
}

@property (nonatomic, readonly) PKPaymentTransaction *transaction;

- (unsigned long long)hash;
- (id)eventType;
- (id)initWithTransaction:(id)arg1 unread:(_Bool)arg2;
- (_Bool)isEqualToActivityEvent:(id)arg1;

@end
