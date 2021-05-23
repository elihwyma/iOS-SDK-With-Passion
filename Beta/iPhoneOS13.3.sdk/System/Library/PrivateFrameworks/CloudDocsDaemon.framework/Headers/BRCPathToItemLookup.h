/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCClientZone, BRCDocumentItem, BRCLocalItem, BRCPQLConnection, BRCPackageItem, BRCRelativePath, BRCServerItem;

@interface BRCPathToItemLookup : NSObject

{
    BRCRelativePath *_pathOfItem;
    BRCRelativePath *_relpathOfFSEvent;
    BRCLocalItem *_matchByFileID;
    BRCDocumentItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCLocalItem *_parentItem;
    BRCLocalItem *_matchByFileIDGlobally;
    BRCDocumentItem *_matchByDocumentIDGlobally;
    BRCClientZone *_clientZone;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parentItem:1;
        unsigned int serverItem:1;
        unsigned int serverByPath:1;
        unsigned int packageItem:1;
        unsigned int clientZone:1;
    } _fetched;
    BRCPQLConnection *_db;
}

@property (nonatomic, readonly) BRCRelativePath *relpathOfItem;
@property (nonatomic, readonly) BRCRelativePath *relpathOfFSEvent;
@property (nonatomic, readonly) BRCLocalItem *byPath;
@property (retain, nonatomic) BRCLocalItem *byFileID;
@property (retain, readonly) BRCLocalItem *byFileIDGlobally;
@property (retain, nonatomic) BRCDocumentItem *byDocumentID;
@property (retain, readonly) BRCDocumentItem *byDocumentIDGlobally;
@property (nonatomic, readonly) BRCServerItem *serverByPath;
@property (nonatomic, readonly) BRCLocalItem *parentItem;
@property (nonatomic, readonly) BRCClientZone *clientZone;
@property (nonatomic, readonly) BRCPQLConnection *db;

+ (id)lookupForRelativePath:(id)arg1;

- (id)description;
- (id)initWithRelativePath:(id)arg1 db:(id)arg2;
- (id)initWithRelativePath:(id)arg1;
- (_Bool)_fetchByFileID:(_Bool)arg1;
- (_Bool)_fetchByDocumentID:(_Bool)arg1;
- (id)_byPathWithLastPathComponent:(id)arg1;
- (_Bool)_fetchByPath;
- (id)_resolveClientZoneWhileFetchingFileID:(_Bool)arg1 fetchindDocID:(_Bool)arg2;
- (_Bool)_shareIDMatchesParent:(id)arg1;
- (_Bool)_fetchClientZone;
- (id)byPathWithLastPathComponent:(id)arg1;

@end
