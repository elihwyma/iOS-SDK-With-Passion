/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKExpressTransactionState : NSObject <Swift>

{
    _Bool _processing;
    long long _technologyType;
    NSString *_paymentApplicationIdentifier;
    NSString *_passUniqueIdentifier;
    unsigned long long _receivedEvents;
}

@property (nonatomic) long long technologyType;
@property (copy, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic, getter=isProcessing) _Bool processing;
@property (nonatomic) unsigned long long receivedEvents;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
