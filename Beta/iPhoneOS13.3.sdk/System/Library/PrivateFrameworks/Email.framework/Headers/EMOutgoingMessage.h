/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMObject.h>

@class EMMessageObjectID, NSData;

@interface EMOutgoingMessage : EMObject

{
    _Bool _shouldSign;
    _Bool _shouldEncrypt;
    NSData *_messageData;
    long long _action;
    EMMessageObjectID *_originalMessageID;
}

@property (nonatomic) long long action;
@property (nonatomic) _Bool shouldSign;
@property (nonatomic) _Bool shouldEncrypt;
@property (retain, nonatomic) EMMessageObjectID *originalMessageID;
@property (copy, nonatomic, readonly) NSData *messageData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageData:(id)arg1 action:(long long)arg2 originalMessageID:(id)arg3 shouldSign:(_Bool)arg4 shouldEncrypt:(_Bool)arg5;
- (id)initWithMessageData:(id)arg1;

@end
