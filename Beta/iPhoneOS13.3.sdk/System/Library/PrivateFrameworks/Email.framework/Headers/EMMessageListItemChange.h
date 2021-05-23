/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class ECMessageFlags, NSArray, NSDate, NSNumber, NSString;

@protocol EMCollectionItemID, EMMessageListItemChangeFlagColors, EMMessageListItemChangeSubject, EMMessageListItemChangeSummary;

@interface EMMessageListItemChange : NSObject <Swift>

{
    NSArray *_mailboxObjectIDs;
    NSArray *_mailboxes;
    _Bool _isToMe;
    _Bool _isCCMe;
    NSDate *_date;
    id <EMMessageListItemChangeSubject> _subject;
    id <EMMessageListItemChangeSummary> _summary;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    ECMessageFlags *_flags;
    NSNumber *_hasUnflagged;
    id <EMMessageListItemChangeFlagColors> _flagColors;
    NSNumber *_isVIP;
    NSNumber *_isBlocked;
    NSNumber *_hasAttachments;
    NSNumber *_conversationNotificationLevel;
    NSNumber *_count;
    NSNumber *_conversationID;
    id <EMCollectionItemID> _displayMessageItemID;
}

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) id <EMMessageListItemChangeSubject> subject;
@property (copy, nonatomic) id <EMMessageListItemChangeSummary> summary;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property _Bool isToMe;
@property _Bool isCCMe;
@property (retain, nonatomic) ECMessageFlags *flags;
@property (retain, nonatomic) NSNumber *hasUnflagged;
@property (copy, nonatomic) id <EMMessageListItemChangeFlagColors> flagColors;
@property (retain, nonatomic) NSNumber *isVIP;
@property (retain, nonatomic) NSNumber *isBlocked;
@property (retain, nonatomic) NSNumber *hasAttachments;
@property (retain, nonatomic) NSNumber *conversationNotificationLevel;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *conversationID;
@property (copy, nonatomic) NSArray *mailboxObjectIDs;
@property (copy, nonatomic) NSArray *mailboxes;
@property (retain, nonatomic) id <EMCollectionItemID> displayMessageItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;
+ (id)changeFrom:(id)arg1 to:(id)arg2;
+ (id)changeForKeyPaths:(id)arg1 ofItem:(id)arg2;
+ (id)changesForKeyPaths:(id)arg1 ofItems:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addChange:(id)arg1;
- (id)_descriptionForInternal:(_Bool)arg1 useDebugDescriptions:(_Bool)arg2;
- (id)_changeDescriptionsForInternal:(_Bool)arg1 useDebugDescriptions:(_Bool)arg2;
- (_Bool)applyToMessageListItem:(id)arg1;

@end
