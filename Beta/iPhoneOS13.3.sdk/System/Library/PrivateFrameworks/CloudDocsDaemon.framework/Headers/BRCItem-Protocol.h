/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCItemID, BRCServerZone, BRCStatInfo, BRCUserRowID;

@protocol BRCItem <Swift>

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
@property (nonatomic, readonly) BRCStatInfo *st;
@property (nonatomic, readonly) BRCUserRowID *ownerKey;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) BRCServerZone *serverZone;
@property (nonatomic, readonly) BRCClientZone *clientZone;
@property (nonatomic) unsigned long long sharingOptions;

- (unsigned short)validateLoggingToFile: /* Error: Ran out of types for this method. */;

@end
