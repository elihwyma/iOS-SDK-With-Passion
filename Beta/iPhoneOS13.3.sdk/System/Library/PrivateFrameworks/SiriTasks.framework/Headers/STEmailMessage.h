/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSArray, NSString, NSURL, STPerson;

@interface STEmailMessage : STSiriModelObject

{
    NSString *_messageBody;
    NSURL *_messageIdentifier;
    STPerson *_sender;
    NSString *_subject;
    long long _type;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSArray *_receivingAddresses;
}

@property (copy, nonatomic) NSString *messageBody;
@property (retain, nonatomic) NSURL *messageIdentifier;
@property (retain, nonatomic) STPerson *sender;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *toRecipients;
@property (retain, nonatomic) NSArray *ccRecipients;
@property (retain, nonatomic) NSArray *bccRecipients;
@property (retain, nonatomic) NSArray *receivingAddresses;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_aceContextObjectValue;
- (id)_personAttributesForRecipients:(id)arg1;

@end
