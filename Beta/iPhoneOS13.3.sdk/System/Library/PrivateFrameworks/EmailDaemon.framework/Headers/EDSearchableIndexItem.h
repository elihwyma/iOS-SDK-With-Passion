/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class CSSearchableItem, NSData, NSDate, NSString;

@protocol EDIndexableMessage;

@interface EDSearchableIndexItem : NSObject

{
    CSSearchableItem *_searchableItem;
    _Bool _fetchBody;
    _Bool _hasCompleteData;
    NSString *_identifier;
    long long _indexingType;
    unsigned long long _itemInstantiationTime;
    id <EDIndexableMessage> _message;
    NSData *_bodyData;
}

@property (nonatomic, readonly) id <EDIndexableMessage> message;
@property (retain, nonatomic) NSData *bodyData;
@property (nonatomic, readonly) _Bool fetchBody;
@property (nonatomic, readonly) _Bool shouldExcludeFromIndex;
@property (nonatomic) _Bool hasCompleteData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic) long long indexingType;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) unsigned long long itemInstantiationTime;
@property (nonatomic, readonly) unsigned long long estimatedSizeInBytes;
@property (retain, nonatomic) NSData *underlyingData;
@property (nonatomic, readonly) _Bool alwaysMarkAsIndexed;
@property (nonatomic, readonly) _Bool requiresPreprocessing;

+ (id)log;
+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(_Bool)arg3;
+ (long long)indexingPriorityByIndexingType:(long long)arg1;
+ (id)accountIdentifierForMessage:(id)arg1;
+ (id)domainIdentifierForAccountID:(id)arg1 mailboxPersistentID:(id)arg2;
+ (id)csIdentifierForMailbox:(id)arg1;
+ (id)domainIdentifierForMessage:(id)arg1;
+ (void)mailboxIdentifiersForMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)itemWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(_Bool)arg4;

- (long long)compare:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)searchableItem;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(_Bool)arg3;
- (void)setNeedsAllAttributesIndexingType;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
- (id)fetchIndexableAttachments;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(_Bool)arg4;
- (void)addStaticAttributesToAttributeSet:(id)arg1;
- (void)_addStaticAttributesToAttributeSet:(id)arg1;
- (void)addUpdatableAttributesToAttributeSet:(id)arg1;
- (void)addFlagsAttributesToAttributeSet:(id)arg1;

@end
