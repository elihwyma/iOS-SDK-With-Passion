/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCAccountSession, BRCDocumentItem, BRCLocalItem, BRCPQLConnection, BRCRelativePath, BRCServerItem, NSString, NSURL;

@interface BRCURLToItemLookup : NSObject <Swift>

{
    BRCAccountSession *_session;
    union {
        struct {
            unsigned int parentItem:1;
            unsigned int relpath:1;
            unsigned int pathMatch:1;
            unsigned int faultedMatch:1;
            unsigned int byIDMatch:1;
            unsigned int reservedMatch:1;
            unsigned int parentPath:1;
        } ;
        unsigned int value;
    } _hasFetched;
    BRCRelativePath *__relpath;
    BRCPQLConnection *_db;
    _Bool _allowAppLibraryRoot;
    NSURL *_url;
    BRCRelativePath *_parentRelpath;
    BRCLocalItem *_parentItem;
    NSString *_filename;
    NSString *_parentPath;
    BRCLocalItem *_byIDLocalItem;
    BRCServerItem *_byIDServerItem;
    unsigned long long _byIDDiffs;
    BRCLocalItem *_byPathLocalItem;
    BRCServerItem *_byPathServerItem;
    unsigned long long _byPathDiffs;
    BRCDocumentItem *_faultedLocalItem;
    BRCServerItem *_faultedServerItem;
    BRCRelativePath *_faultedRelpath;
    unsigned long long _faultedDiffs;
    BRCLocalItem *_reservedLocalItem;
    BRCServerItem *_reservedServerItem;
}

@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) CDStruct_177058d5 byIDMatch;
@property (nonatomic, readonly) BRCLocalItem *byIDLocalItem;
@property (nonatomic, readonly) BRCServerItem *byIDServerItem;
@property (nonatomic, readonly) BRCRelativePath *relpath;
@property (nonatomic, readonly) unsigned long long byIDDiffs;
@property (nonatomic, readonly) CDStruct_177058d5 byPathMatch;
@property (nonatomic, readonly) BRCLocalItem *byPathLocalItem;
@property (nonatomic, readonly) BRCServerItem *byPathServerItem;
@property (nonatomic, readonly) BRCRelativePath *byPathRelpath;
@property (nonatomic, readonly) unsigned long long byPathDiffs;
@property (nonatomic, readonly) CDStruct_177058d5 faultedMatch;
@property (nonatomic, readonly) BRCDocumentItem *faultedLocalItem;
@property (nonatomic, readonly) BRCServerItem *faultedServerItem;
@property (nonatomic, readonly) BRCRelativePath *faultedRelpath;
@property (nonatomic, readonly) unsigned long long faultedDiffs;
@property (nonatomic, readonly) CDStruct_177058d5 reservedMatch;
@property (nonatomic, readonly) BRCLocalItem *reservedLocalItem;
@property (nonatomic, readonly) BRCServerItem *reservedServerItem;
@property (nonatomic, readonly) BRCRelativePath *parentRelpath;
@property (nonatomic, readonly) BRCLocalItem *parentItem;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *parentPath;
@property (nonatomic, readonly) unsigned short pathType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(_Bool)arg2 session:(id)arg3 db:(id)arg4;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(_Bool)arg2 session:(id)arg3;
- (_Bool)resolveParentAndKeepOpenMustExist:(_Bool)arg1 errcode:(int *)arg2;
- (void)refreshByPathDiffs;
- (void)_fetchPathMatch;
- (void)refreshByIDDiffs;
- (void)_fetchIDMatch;
- (void)_fetchRelPath;
- (void)_fetchFaultedMatch;
- (void)refreshFaultedDiffs;
- (void)_fetchReservedPathMatch;
- (id)initWithURL:(id)arg1 session:(id)arg2;
- (_Bool)resolveAndKeepOpenWithError:(id *)arg1;
- (void)closePaths;
- (void)clearByPathItem;
- (void)clearByIDItem;
- (void)clearFaultedItem;
- (void)clearReservedItem;
- (void)markPathMatchLostIfLocationDoesntMatch:(CDStruct_177058d5 *)arg1;
- (void)handleReservedPathMatchesIfNeeded;
- (void)matchLookupItemsWithDisk;
- (void)_clearNamespace:(unsigned char)arg1;
- (_Bool)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (CDStruct_177058d5)_pathMatchInNamespace:(unsigned char)arg1;
- (_Bool)_canUpdatePathMatch:(const CDStruct_177058d5 *)arg1 hasAdditionsToApply:(_Bool)arg2;
- (void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4;
- (_Bool)_bounceBouncesHiddenByFault:(id)arg1;
- (_Bool)_bouncePathMatchIfNecessaryWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5;
- (_Bool)trashItemIfNecessary:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (_Bool)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (_Bool)_applyOrDownloadThumbnailIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 updatedAddition:(_Bool *)arg4 applySchedulerState:(int *)arg5;
- (_Bool)_appliedOrDownloadContentIfNecessary:(id)arg1 si:(id)arg2 applySchedulerState:(int *)arg3;
- (_Bool)_applyOrEvictLosersIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 addedLosers:(id)arg4 removedLosers:(id)arg5 updatedAddition:(_Bool *)arg6 applySchedulerState:(int *)arg7;
- (_Bool)copyItemAtURLToGenstore:(id)arg1 forItem:(id)arg2 error:(id *)arg3;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;

@end
