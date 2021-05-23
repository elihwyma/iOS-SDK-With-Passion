/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSString;

@interface CSSearchableItemAttributeSet (IC)

@property (copy, nonatomic) NSString *ic_dataSourceIdentifier;
@property (nonatomic) unsigned long long ic_searchResultType;
@property (nonatomic) _Bool ic_isLocked;
@property (nonatomic) _Bool ic_isShared;
@property (nonatomic) _Bool ic_hasChecklists;
@property (nonatomic) _Bool ic_hasAttachments;
@property (nonatomic) _Bool ic_hasDrawings;
@property (nonatomic) _Bool ic_hasScannedDocuments;

+ (id)ic_customAttributeKeyDictionary;
+ (id)ic_customAttributeKeyWithName:(id)arg1 searchable:(_Bool)arg2 searchableByDefault:(_Bool)arg3 unique:(_Bool)arg4 multiValued:(_Bool)arg5;
+ (id)ic_specializedIndexFieldAttributeKeyForStringField:(id)arg1;
+ (id)ic_dataSourceIdentifierCustomKey;
+ (id)ic_searchResultTypeCustomKey;
+ (id)ic_itemIsLockedCustomKey;
+ (id)ic_itemIsSharedCustomKey;
+ (id)ic_itemHasChecklistsCustomKey;
+ (id)ic_itemHasAttachmentsCustomKey;
+ (id)ic_itemHasDrawingsCustomKey;
+ (id)ic_itemHasScannedDocumentsCustomKey;

- (void)ic_populateValuesForSpecializedFields;
- (unsigned long long)ic_relevance;

@end
