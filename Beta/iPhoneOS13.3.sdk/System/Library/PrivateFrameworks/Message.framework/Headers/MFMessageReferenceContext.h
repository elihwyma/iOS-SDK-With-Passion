/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class ECSubject, EFMutableInt64Set, MFEmailSet, MFMailMessage, NSArray, NSMutableDictionary, NSString;

@interface MFMessageReferenceContext : NSObject

{
    NSString *_sender;
    NSArray *_senderList;
    NSString *_to;
    NSArray *_toList;
    NSString *_cc;
    NSArray *_ccList;
    NSString *_bcc;
    NSArray *_bccList;
    MFMailMessage *_message;
    long long _libraryID;
    long long _messageIDHash;
    ECSubject *_subject;
    EFMutableInt64Set *_references;
    NSMutableDictionary *_messageIDsBySubject;
    long long _mailboxID;
    long long _conversationIDHash;
    unsigned long long *_conversationFlagsRef;
    double _dateSentInterval;
}

@property (retain, nonatomic) MFMailMessage *message;
@property (nonatomic) long long libraryID;
@property (nonatomic) long long messageIDHash;
@property (copy, nonatomic) ECSubject *subject;
@property (retain, nonatomic) EFMutableInt64Set *references;
@property (retain, nonatomic) NSMutableDictionary *messageIDsBySubject;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long conversationIDHash;
@property (nonatomic) unsigned long long *conversationFlagsRef;
@property (nonatomic) double dateSentInterval;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (copy, nonatomic) NSArray *bccList;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *to;
@property (copy, nonatomic) NSString *cc;
@property (copy, nonatomic) NSString *bcc;
@property (nonatomic, readonly) MFEmailSet *participants;

@end
