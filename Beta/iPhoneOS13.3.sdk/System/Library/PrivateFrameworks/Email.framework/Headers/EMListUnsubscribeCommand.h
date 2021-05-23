/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EMListUnsubscribeCommandMessageHeaders, NSString;

@protocol EDReceivingAccount;

@interface EMListUnsubscribeCommand : NSObject <Swift>

{
    id <EDReceivingAccount> _account;
    NSString *_accountIdentifier;
    NSString *_address;
    NSString *_subject;
    NSString *_body;
    EMListUnsubscribeCommandMessageHeaders *_originalMessageHeaders;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) id <EDReceivingAccount> account;
@property (nonatomic, readonly) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders;

+ (_Bool)supportsSecureCoding;
+ (CDUnknownBlockType)accountFinderBlock;
+ (void)setAccountFinderBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3;
- (id)_accountWithIdentifier:(id)arg1;
- (id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5;

@end
