/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface EDInteractionEvent : NSObject

{
    long long _eventID;
    long long _version;
    NSDate *_date;
    NSString *_accountID;
    long long _mailboxID;
    long long _conversationID;
    long long _messageIDHash;
    long long _messagePersistentID;
    NSString *_name;
    NSDictionary *_data;
}

@property (nonatomic) long long eventID;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long conversationID;
@property (nonatomic) long long messageIDHash;
@property (nonatomic) long long messagePersistentID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *data;

- (id)debugDescription;

@end
