/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString;

@interface PKPaymentMessage : NSObject <Swift>

{
    _Bool _allowDeepLink;
    _Bool _hasAssociatedPaymentApplication;
    _Bool _archived;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_content;
    NSDate *_messageDate;
    NSDate *_expirationDate;
    unsigned long long _messageType;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *messageDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic) _Bool allowDeepLink;
@property (nonatomic) _Bool hasAssociatedPaymentApplication;
@property (nonatomic, readonly) _Bool archiveOnNextTransaction;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, getter=isArchived) _Bool archived;

+ (_Bool)supportsSecureCoding;
+ (id)paymentMessageWithDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPaymentMessage:(id)arg1;

@end
