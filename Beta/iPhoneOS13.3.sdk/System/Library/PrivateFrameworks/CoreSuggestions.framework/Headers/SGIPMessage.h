/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, SGIPPerson;

@interface SGIPMessage : NSObject

{
    _Bool _isSent;
    _Bool _isGroupConversation;
    _Bool _isSenderSignificant;
    NSString *_messageId;
    SGIPPerson *_sender;
    NSArray *_recipients;
    NSString *_subject;
    NSDate *_dateSent;
    NSArray *_messageUnits;
}

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) SGIPPerson *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSDate *dateSent;
@property (nonatomic) _Bool isSent;
@property (nonatomic) _Bool isGroupConversation;
@property (nonatomic) _Bool isSenderSignificant;
@property (retain, nonatomic) NSArray *messageUnits;

+ (_Bool)supportsSecureCoding;
+ (id)messageWithIPMessage:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toIPMessage;
- (_Bool)isEqualToMessage:(id)arg1;

@end
