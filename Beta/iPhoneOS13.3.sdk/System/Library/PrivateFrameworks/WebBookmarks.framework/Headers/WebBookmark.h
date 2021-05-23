/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface WebBookmark : NSObject

{
    _Bool _folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    _Bool _editable;
    _Bool _deletable;
    _Bool _hidden;
    _Bool _syncable;
    _Bool _fetchedIconData;
    NSData *_iconData;
    _Bool _locallyAdded;
    int _archiveStatus;
    int _webFilterStatus;
    NSDictionary *_extraAttributes;
    NSDictionary *_localAttributes;
    int _id;
    int _parentID;
    int _specialID;
    unsigned int _orderIndex;
    _Bool _inserted;
    _Bool _needsSyncUpdate;
    unsigned long long _modifiedAttributes;
    _Bool _usedForInMemoryChangeTracking;
}

@property (retain, nonatomic) NSString *serverID;
@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSData *syncData;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentationForInMemoryChangeTracking;
@property (nonatomic, readonly) unsigned long long modifiedAttributes;
@property (retain, nonatomic) NSString *previewText;
@property (nonatomic) _Bool locallyAdded;
@property (nonatomic) int archiveStatus;
@property (nonatomic) int webFilterStatus;
@property (retain, nonatomic) NSDate *dateLastArchived;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateLastViewed;
@property (retain, nonatomic) NSDate *dateLastFetched;
@property (retain, nonatomic) NSDictionary *nextPageURLs;
@property (retain, nonatomic) NSString *localPreviewText;
@property (retain, nonatomic) NSString *readingListIconURL;
@property (retain, nonatomic) NSString *readingListIconUUID;
@property (nonatomic) _Bool hasFetchedMetadata;
@property (nonatomic) _Bool shouldArchive;
@property (nonatomic) _Bool needsSyncUpdate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *address;
@property (nonatomic, readonly) int parentID;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) int specialID;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly, getter=isDeletable) _Bool deletable;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isFolder) _Bool folder;
@property (nonatomic, readonly, getter=isInserted) _Bool inserted;
@property (nonatomic, readonly, getter=isSyncable) _Bool syncable;
@property (nonatomic) _Bool fetchedIconData;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSDictionary *extraAttributes;
@property (retain, nonatomic) NSDictionary *localAttributes;

+ (id)_trimmedTitle:(id)arg1;
+ (id)_trimmedPreviewText:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setUUID:(id)arg1;
- (id)localizedTitle;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)isReadingListItem;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (_Bool)isFrequentlyVisitedSitesFolder;
- (_Bool)isWebFilterWhiteListFolder;
- (unsigned int)_orderIndex;
- (id)initFolderWithParentID:(int)arg1;
- (_Bool)isBookmarksMenuFolder;
- (_Bool)isReadingListFolder;
- (_Bool)_attributesMarkedAsModified:(unsigned long long)arg1;
- (void)_markAttributesAsModified:(unsigned long long)arg1;
- (void)_markSpecial:(int)arg1;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3;
- (_Bool)isEqualToBookmark:(id)arg1;
- (void)_setParentID:(int)arg1;
- (void)_setUsedForInMemoryChangeTracking:(_Bool)arg1;
- (id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)arg1;
- (void)_setID:(int)arg1;
- (void)_setInserted:(_Bool)arg1;
- (id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)shortTypeDescription;
- (id)initBuiltinBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initFrequentlyVisitedSiteWithWebBookmark:(id)arg1 title:(id)arg2;
- (_Bool)isBookmarksBarFolder;
- (_Bool)_usedForInMemoryChangeTracking;
- (unsigned long long)archiveSize;
- (void)clearArchiveSynchronously;
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1;
- (void)clearArchive;
- (void)_setOrderIndex:(unsigned int)arg1;
- (_Bool)fullArchiveAvailable;
- (void)_setSyncable:(_Bool)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1 hasIcon:(_Bool)arg2;
- (void)cleanupRedundantPreviewText;
- (id)_readingListPropertyNamed:(id)arg1;
- (void)_modifyExtraReadingListAttributes:(CDUnknownBlockType)arg1;
- (void)_modifyLocalReadingListAttributes:(CDUnknownBlockType)arg1;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3;
- (id)offlineArchiveDirectoryPath;
- (id)_suggestedFileNameForWebView:(id)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (void)_removeDirectoryAtPath:(id)arg1;
- (id)webarchivePathInReaderForm:(_Bool)arg1 fileExists:(_Bool *)arg2;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (_Bool)writeOfflineWebView:(id)arg1 asArchive:(_Bool)arg2 inReaderForm:(_Bool)arg3;
- (_Bool)shouldReattemptArchiveWithAutomaticArchivingEnabled:(_Bool)arg1;

@end
