/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCClientZone, BRCItemID, BRCPQLConnection, BRCServerMetrics, BRCServerStatInfo, BRCServerZone, BRCSharedServerItem, BRCUserRowID, BRCVersion, BRFieldCKInfo, NSString;

@interface BRCServerItem : NSObject

{
    BRCAccountSession *_session;
    BRCServerZone *_zone;
    unsigned long long _sharingOptions;
    BRCPQLConnection *_db;
    BRFieldCKInfo *_sideCarCKInfo;
    _Bool _needsInsert;
    unsigned int _pcsChainState;
    NSString *_symlinkTarget;
    BRCUserRowID *_ownerKey;
    BRCItemID *_itemID;
    NSString *_originalName;
    long long _rank;
    BRCServerStatInfo *_st;
    BRCVersion *_latestVersion;
    BRCServerMetrics *_serverMetrics;
    BRCServerZone *_serverZone;
    BRCClientZone *_clientZone;
    long long _directoryMtime;
}

@property (nonatomic, readonly) _Bool isSharedItem;
@property (nonatomic, readonly) _Bool isSharedToMeTopLevelItem;
@property (nonatomic, readonly) _Bool isSharedToMeChildItem;
@property (nonatomic, readonly) BRCSharedServerItem *asSharedItem;
@property (nonatomic, readonly) long long rank;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) BRCServerStatInfo *st;
@property (nonatomic, readonly) BRCVersion *latestVersion;
@property (nonatomic, readonly) BRCServerMetrics *serverMetrics;
@property (nonatomic, readonly) NSString *symlinkTarget;
@property (nonatomic, readonly) long long directoryMtime;
@property (nonatomic, readonly) _Bool isDead;
@property (nonatomic, readonly) _Bool isLive;
@property (nonatomic, readonly) _Bool isBRAlias;
@property (nonatomic, readonly) _Bool isPackage;
@property (nonatomic, readonly) _Bool isDocument;
@property (nonatomic, readonly) _Bool isDirectory;
@property (nonatomic, readonly) _Bool isFSRoot;
@property (nonatomic, readonly) _Bool isZoneRoot;
@property (nonatomic, readonly) _Bool isSymLink;
@property (nonatomic, readonly) _Bool isFinderBookmark;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BRCUserRowID *ownerKey;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) BRCServerZone *serverZone;
@property (nonatomic, readonly) BRCClientZone *clientZone;
@property (nonatomic) unsigned long long sharingOptions;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2;
- (id)sideCarInfo;
- (id)parentItemOnFS;
- (id)parentItemIDOnFS;
- (id)parentZoneOnFS;
- (_Bool)validateLoggingToFile:(struct __sFILE *)arg1;
- (id)aliasTargetClientZone;
- (id)initWithServerItem:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id *)arg3;
- (id)appLibraryForRootItem;
- (unsigned int)pcsChainState;
- (id)parentLocalItemOnFS;
- (id)parentItemIDOnServer;
- (id)aliasTargetAppLibrary;
- (id)aliasTargetItemID;

@end
