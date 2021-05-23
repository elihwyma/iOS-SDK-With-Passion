/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAppLibrary, BRCLocalItem, BRCRelativePath, BRCServerItem, BRCServerZone, NSURL;

@interface BRCItemToPathLookup : NSObject

{
    BRCLocalItem *_item;
    BRCServerItem *_serverItem;
    BRCServerZone *_serverZone;
    BRCRelativePath *_parentPath;
    BRCRelativePath *_matchByFileID;
    BRCRelativePath *_matchByDocumentID;
    BRCRelativePath *_matchByPath;
    unsigned long long _parentFileID;
    _Bool _fileSystemIDMayStillExist;
    _Bool _cleanupFaults;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parent:1;
    } _fetched;
}

@property (nonatomic, readonly) BRCRelativePath *byFileSystemID;
@property (nonatomic, readonly) _Bool fileSystemIDMayStillExist;
@property (nonatomic, readonly) BRCRelativePath *parentPath;
@property (nonatomic, readonly) BRCRelativePath *byPath;
@property (nonatomic, readonly) NSURL *coordinatedWriteURL;
@property (nonatomic, readonly) NSURL *coordinatedReadURL;
@property (nonatomic, readonly) BRCAppLibrary *coordinatedURLAppLibrary;

+ (id)lookupForItem:(id)arg1;
+ (id)lookupForServerItem:(id)arg1 cleanupFaults:(_Bool)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithItem:(id)arg1;
- (void)closePaths;
- (_Bool)_fetchByPath;
- (id)initWithServerItem:(id)arg1 cleanupFaults:(_Bool)arg2;
- (void)_fetchParent;
- (_Bool)computeLogicalPath:(id *)arg1 physicalPath:(id *)arg2 isDirectory:(_Bool *)arg3;
- (_Bool)_fetchByDocumentID;
- (_Bool)_fetchByFileID;

@end
