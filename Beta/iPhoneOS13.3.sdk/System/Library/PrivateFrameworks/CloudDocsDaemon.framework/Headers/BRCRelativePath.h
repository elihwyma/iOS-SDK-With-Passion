/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCAccountSession, BRCAppLibrary, BRCBookmark, BRCGenerationID, BRFileObjectID, NSData, NSSet, NSString, NSURL;

@interface BRCRelativePath : NSObject <Swift>

{
    NSSet *_roots;
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    BRCAppLibrary *_appLibrary;
    unsigned char _finderInfo[32];
    unsigned long long _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    struct timespec _birthtime;
    struct timespec _mtime;
    long long _size;
    unsigned long long _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    unsigned short _type;
    unsigned char _itemScope;
    unsigned int _isExcluded:1;
    unsigned int _isInPackage:1;
    unsigned int _isBundle:1;
    unsigned int _isPackageRoot:1;
    unsigned int _readFault:1;
    unsigned int _hasFinderTags:1;
    unsigned int _isBusy:1;
    unsigned int _hasFinderInfoAliasBit:1;
    unsigned int _isBRAlias:1;
    unsigned int _qtnResolved:1;
    unsigned int _xattrsResolved:1;
    unsigned int _sharedBookmarkResolved:1;
    int _fd;
    _Atomic int _openRefCount;
    struct brc_mutex _mutex;
    BRCAccountSession *_session;
    NSData *_quarantineInfo;
    NSData *_xattrs;
    NSString *_sharedItemBookmark;
}

@property (retain, nonatomic) BRCAppLibrary *appLibrary;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned char itemScope;
@property (nonatomic, readonly) _Bool isDocument;
@property (nonatomic, readonly) _Bool isBundle;
@property (nonatomic, readonly) _Bool isFault;
@property (nonatomic, readonly) _Bool isFile;
@property (nonatomic, readonly) _Bool isPackageRoot;
@property (nonatomic, readonly) _Bool isInPackage;
@property (nonatomic, readonly) _Bool isRoot;
@property (nonatomic, readonly) _Bool isUnixDir;
@property (nonatomic, readonly) _Bool exists;
@property (nonatomic, readonly) _Bool isWritable;
@property (nonatomic, readonly) _Bool isExecutable;
@property (nonatomic, readonly) _Bool isHiddenExtension;
@property (nonatomic, readonly) _Bool isHiddenFile;
@property (nonatomic, readonly) _Bool isBusy;
@property (nonatomic, readonly) _Bool isSymLink;
@property (nonatomic, readonly) _Bool isExcluded;
@property (nonatomic, readonly) _Bool hasFinderTags;
@property (nonatomic, readonly) _Bool isFinderAlias;
@property (nonatomic, readonly) _Bool isBRAlias;
@property (nonatomic, readonly) unsigned int fileType;
@property (nonatomic, readonly) unsigned long long fileID;
@property (nonatomic, readonly) unsigned long long parentFileID;
@property (nonatomic, readonly) unsigned int hardlinkCount;
@property (nonatomic, readonly) unsigned int documentID;
@property (nonatomic, readonly) BRFileObjectID *fileObjectID;
@property (nonatomic, readonly) BRFileObjectID *parentFileObjectID;
@property (nonatomic, readonly) int deviceID;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) long long birthTime;
@property (nonatomic, readonly) long long modificationTime;
@property (nonatomic, readonly) unsigned int fsGenerationID;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) NSString *absolutePath;
@property (nonatomic, readonly) NSString *pathRelativeToRoot;
@property (nonatomic, readonly) NSString *pathRelativeToPackageRoot;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *logicalName;
@property (nonatomic, readonly) NSString *symlinkContent;
@property (nonatomic, readonly) BRCRelativePath *root;
@property (nonatomic, readonly) NSURL *physicalURL;
@property (nonatomic, readonly) NSString *faultDisplayName;
@property (nonatomic, readonly) BRCBookmark *bookmark;
@property (nonatomic, readonly) NSData *quarantineInfo;
@property (nonatomic, readonly) NSData *xattrs;
@property (nonatomic, readonly) NSString *sharedItemBookmark;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long parentHash;

+ (_Bool)supportsSecureCoding;
+ (int)locateByFileID:(unsigned long long)arg1 session:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)close;
- (id)logicalURL;
- (id)relativePath;
- (_Bool)isResolved;
- (void)_close;
- (id)basePath;
- (_Bool)performOnOpenFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (id)pathWithChildAtPath:(id)arg1;
- (id)initWithAbsolutePath:(id)arg1 session:(id)arg2;
- (_Bool)resolveAndKeepOpenMustExist:(_Bool)arg1 error:(int *)arg2;
- (id)refreshFromPathMustExist:(_Bool)arg1;
- (_Bool)resolveMustExist:(_Bool)arg1 error:(int *)arg2;
- (id)initWithFileID:(unsigned long long)arg1 session:(id)arg2;
- (_Bool)performOnOpenParentFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (id)initWithFileID:(unsigned long long)arg1 root:(id)arg2 session:(id)arg3;
- (id)logicalURLWithLogicalName:(id)arg1;
- (_Bool)isFileWithFinderInfoAliasBit;
- (id)pathOfPackageRoot;
- (_Bool)_shouldKeepBasePathOpenWithoutOpenedFD;
- (_Bool)_resolveRootWhenExists:(_Bool)arg1;
- (_Bool)_fixupRelativePath;
- (int)_resolvePathTypeAndContainer;
- (_Bool)_shouldKeepBasePathOpen;
- (int)_resolveBasePath:(_Bool)arg1;
- (int)_resolveWhenExists;
- (int)_resolveWhenDoesntExist;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (_Bool)resolveAndKeepOpenMustExist:(_Bool)arg1 allowResolveInPkg:(_Bool)arg2 error:(int *)arg3;
- (_Bool)_resolveAndKeepOpenMustExist:(_Bool)arg1 allowResolveInPkg:(_Bool)arg2 error:(int *)arg3;
- (_Bool)isEqualToRelativePath:(id)arg1;
- (id)initWithRootPath:(id)arg1 session:(id)arg2;
- (id)initWithPath:(id)arg1 appLibrary:(id)arg2;
- (void)refreshPathTypeAndContainer;
- (_Bool)flock:(int)arg1;

@end
