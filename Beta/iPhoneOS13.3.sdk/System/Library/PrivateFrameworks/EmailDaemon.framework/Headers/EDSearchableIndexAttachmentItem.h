/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class CSSearchableItem, EDSearchableIndexAttachmentItemMetadatum, EFPromise, NSData, NSDate, NSString;

@interface EDSearchableIndexAttachmentItem : NSObject

{
    CSSearchableItem *_searchableItem;
    _Bool _requiresPreprocessing;
    NSString *_identifier;
    NSData *_underlyingData;
    long long _indexingType;
    unsigned long long _itemInstantiationTime;
    NSString *_attachmentPersistentID;
    NSString *_messagePersistentID;
    EDSearchableIndexAttachmentItemMetadatum *_metadatum;
    EFPromise *_attributeSetForFilePromise;
    double _searchableItemProcessingDelay;
}

@property (retain, nonatomic) EFPromise *attributeSetForFilePromise;
@property (copy, nonatomic) NSString *attachmentPersistentID;
@property (copy, nonatomic) NSString *messagePersistentID;
@property (retain, nonatomic) EDSearchableIndexAttachmentItemMetadatum *metadatum;
@property (nonatomic) _Bool requiresPreprocessing;
@property (nonatomic) double searchableItemProcessingDelay;
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
@property (nonatomic, readonly) _Bool hasCompleteData;
@property (nonatomic, readonly) _Bool alwaysMarkAsIndexed;
@property (nonatomic, readonly) _Bool shouldExcludeFromIndex;

+ (id)log;
+ (id)attachmentPersistentIDFromItemIdentifier:(id)arg1;
+ (id)identifierForAttachmentPersistentID:(id)arg1;

- (long long)compare:(id)arg1;
- (id)searchableItem;
- (void)setNeedsAllAttributesIndexingType;
- (id)fetchIndexableAttachments;
- (id)initWithAttachmentPersistentID:(id)arg1 messagePersistentID:(id)arg2 metadatum:(id)arg3;

@end
