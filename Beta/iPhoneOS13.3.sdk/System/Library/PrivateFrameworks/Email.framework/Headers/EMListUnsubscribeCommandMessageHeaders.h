/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <Swift>

{
    NSString *_firstRecipient;
    NSString *_subject;
    NSString *_firstSenderAddress;
    NSString *_listID;
}

@property (nonatomic, readonly) NSString *firstRecipient;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *firstSenderAddress;
@property (nonatomic, readonly) NSString *listID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaders:(id)arg1;

@end
