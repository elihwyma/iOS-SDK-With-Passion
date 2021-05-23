/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class ECMessageFlags, ECSubject, NSArray, NSDate, NSIndexSet, NSString;

@protocol EMCollectionItemID;

@protocol EMMutableMessageListItem <Swift>

@property (retain) NSDate *date;
@property (retain) ECSubject *subject;
@property (copy) NSString *summary;
@property (copy) NSArray *senderList;
@property (copy) NSArray *toList;
@property (copy) NSArray *ccList;
@property _Bool isToMe;
@property _Bool isCCMe;
@property (retain) ECMessageFlags *flags;
@property _Bool hasUnflagged;
@property (copy) NSIndexSet *flagColors;
@property _Bool isVIP;
@property _Bool isBlocked;
@property _Bool hasAttachments;
@property long long conversationNotificationLevel;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id <EMCollectionItemID> displayMessageItemID;
@property long long _internalID;

@end
