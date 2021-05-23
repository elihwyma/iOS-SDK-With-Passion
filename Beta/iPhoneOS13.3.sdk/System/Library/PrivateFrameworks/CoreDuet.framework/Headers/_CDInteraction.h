/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject

{
    _Bool _isResponse;
    _Bool _forcePersistInteraction;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSString *_locationUUID;
    long long _mechanism;
    long long _direction;
    NSString *_bundleId;
    NSString *_targetBundleId;
    NSString *_groupName;
    NSURL *_contentURL;
    NSString *_derivedIntentIdentifier;
    NSString *_domainIdentifier;
    NSString *_account;
    _CDContact *_sender;
    NSArray *_recipients;
    NSArray *_keywords;
    NSArray *_attachments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool userIsSender;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSArray *peopleIdentifiers;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _Bool userIsThreadInitiator;
@property (nonatomic) _Bool forcePersistInteraction;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSString *uuid;
@property (retain) NSString *locationUUID;
@property long long mechanism;
@property long long direction;
@property _Bool isResponse;
@property (retain) NSString *bundleId;
@property (retain) NSString *targetBundleId;
@property (retain) NSString *groupName;
@property (retain) NSURL *contentURL;
@property (retain) NSString *derivedIntentIdentifier;
@property (retain) NSString *domainIdentifier;
@property (retain) NSString *account;
@property (retain) _CDContact *sender;
@property (retain) NSArray *recipients;
@property (retain) NSArray *keywords;
@property (retain) NSArray *attachments;

+ (_Bool)supportsSecureCoding;
+ (id)conversationIdForMobileMailInteractionRecipients:(id)arg1;
+ (id)recipientIdentifiersFromMobileMailConversationId:(id)arg1;
+ (id)shareSheetInteractionFromINInteraction:(id)arg1 bundleID:(id)arg2 knowledgeStore:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionOfArray:(id)arg1;
- (id)initWithINInteraction:(id)arg1 bundleID:(id)arg2;

@end
