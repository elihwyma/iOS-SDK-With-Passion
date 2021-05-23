/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocs/BRQueryItem.h>

@class BRCAppLibrary, BRCItemGlobalID, BRFileObjectID, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCNotification : BRQueryItem

{
    _Bool _isInDocumentScope;
    _Bool _isInDataScope;
    _Bool _isInTrashScope;
    BRCItemGlobalID *_itemGlobalID;
    BRCItemGlobalID *_parentGlobalID;
    unsigned long long _oldParentFileID;
    NSSet *_parentGlobalIDs;
    NSMutableSet *_appLibraryIDsWithReverseAliases;
    BRCAppLibrary *_appLibrary;
    NSString *_oldAppLibraryID;
    NSString *_aliasSourceAppLibraryID;
    NSString *_unsaltedBookmarkData;
}

@property (nonatomic, readonly) BRCAppLibrary *appLibrary;
@property (nonatomic, readonly) NSString *aliasSourceAppLibraryID;
@property (nonatomic, readonly) BRCItemGlobalID *itemGlobalID;
@property (nonatomic, readonly) BRCItemGlobalID *parentGlobalID;
@property (nonatomic, readonly) unsigned long long oldParentFileID;
@property (nonatomic, readonly) BRFileObjectID *oldParentFileObjectID;
@property (nonatomic, readonly) NSString *oldAppLibraryID;
@property (nonatomic, readonly) BRFileObjectID *parentFileObjectID;
@property (retain, nonatomic) NSSet *parentGlobalIDs;
@property (retain, nonatomic) NSMutableSet *appLibraryIDsWithReverseAliases;
@property (retain, nonatomic) NSString *unsaltedBookmarkData;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) _Bool isInDocumentScope;
@property (nonatomic, readonly) _Bool isInDataScope;
@property (nonatomic, readonly) _Bool isInTrashScope;
@property (nonatomic, readonly) _Bool isDocumentsFolder;

+ (_Bool)supportsSecureCoding;
+ (id)notificationFromItem:(id)arg1 relpath:(id)arg2;
+ (id)notificationGatheredFromItem:(id)arg1;
+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)merge:(id)arg1;
- (_Bool)canMerge:(id)arg1;
- (id)subclassDescription;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (void)_addAliasDecoration:(id)arg1;
- (void)setNumberAttribute:(id)arg1 forKey:(id)arg2;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;

@end
