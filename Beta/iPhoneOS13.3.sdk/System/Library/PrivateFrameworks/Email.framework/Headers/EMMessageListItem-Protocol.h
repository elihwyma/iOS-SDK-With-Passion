/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class ECMessageFlags, ECSubject, EMMessage, EMObjectID, NSArray, NSDate, NSIndexSet, NSString;

@protocol EMCollectionItemID;

@protocol EMMessageListItem <Swift>

@property (readonly) NSDate *date;
@property (readonly) ECSubject *subject;
@property (copy, readonly) NSString *summary;
@property (copy, readonly) NSArray *senderList;
@property (copy, readonly) NSArray *toList;
@property (copy, readonly) NSArray *ccList;
@property (readonly) ECMessageFlags *flags;
@property (readonly) _Bool hasUnflagged;
@property (copy, readonly) NSIndexSet *flagColors;
@property (readonly) _Bool isVIP;
@property (readonly) _Bool isBlocked;
@property (readonly) _Bool isToMe;
@property (readonly) _Bool isCCMe;
@property (readonly) _Bool hasAttachments;
@property (readonly) long long conversationNotificationLevel;
@property (readonly) unsigned long long count;
@property (readonly) long long conversationID;
@property (copy, readonly) NSArray *mailboxObjectIDs;
@property (copy, readonly) NSArray *mailboxes;
@property (readonly) id <EMCollectionItemID> displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EMMessage *displayMessage;
@property (readonly) _Bool deleteMovesToTrash;
@property (readonly) _Bool supportsArchiving;
@property (readonly) _Bool shouldArchiveByDefault;
@property (readonly) _Bool isEditable;

@end
