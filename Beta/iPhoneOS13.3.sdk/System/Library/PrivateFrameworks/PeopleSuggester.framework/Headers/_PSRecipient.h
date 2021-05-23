/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class CNContact, NSString;

@interface _PSRecipient : NSObject

{
    NSString *_identifier;
    NSString *_handle;
    NSString *_displayName;
    CNContact *_contact;
    NSString *_senderHandle;
}

@property (copy, nonatomic, readonly) NSString *senderHandle;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *handle;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

+ (_Bool)supportsSecureCoding;
+ (id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3;
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4;

@end
