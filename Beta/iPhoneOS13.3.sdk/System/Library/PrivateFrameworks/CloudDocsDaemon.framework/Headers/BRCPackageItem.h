/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCGenerationID, NSData, NSString;

@interface BRCPackageItem : NSObject

{
    _Bool _isDirty;
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _mode;
    int _type;
    long long _assetRank;
    unsigned long long _packageID;
    unsigned long long _fileID;
    BRCGenerationID *_generationID;
    NSString *_pathInPackage;
    long long _mtime;
    long long _size;
    NSData *_quarantineInfo;
    NSData *_xattrs;
}

@property (nonatomic, readonly) unsigned long long packageDocumentID;
@property (nonatomic, readonly) unsigned long long fileID;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic, readonly) NSString *pathInPackage;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) long long assetRank;
@property (nonatomic, readonly) _Bool isFile;
@property (nonatomic, readonly) _Bool isSymLink;
@property (nonatomic, readonly) _Bool isDirectory;
@property (nonatomic, readonly) long long mtime;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) BOOL mode;
@property (nonatomic, readonly) NSData *contentSignature;
@property (nonatomic, readonly) NSData *quarantineInfo;
@property (nonatomic, readonly) NSString *symlinkContent;
@property (nonatomic, readonly) NSData *xattrs;

+ (_Bool)dumpSession:(id)arg1 toContext:(id)arg2 db:(id)arg3 error:(id *)arg4;
+ (long long)aggregatePackageSizeForPackageID:(unsigned int)arg1 session:(id)arg2;
+ (_Bool)packageChangedAtRelativePath:(id)arg1;
+ (long long)largestPackageItemSizeInDocumentID:(unsigned int)arg1 session:(id)arg2;
+ (struct PQLResultSet *)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2;
+ (_Bool)updateSignaturesForFilesInItem:(id)arg1 fromCKPackage:(id)arg2 error:(id *)arg3;
+ (_Bool)updateSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (id)packageItemWithDocumentID:(unsigned int)arg1 relativePath:(id)arg2 session:(id)arg3;
+ (struct PQLResultSet *)packageItemsForDocumentID:(unsigned int)arg1 order:(unsigned long long)arg2 session:(id)arg3;
+ (_Bool)_deleteSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)_rescanDirectoryInPackage:(id)arg1 error:(id *)arg2;
+ (id)packageItemForRelpath:(id)arg1;

- (id)description;
- (id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2;
- (_Bool)saveToDBWithSession:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)initWithRelativePath:(id)arg1 markDirty:(_Bool)arg2;
- (_Bool)changedAtRelpath:(id)arg1;
- (_Bool)setDirty:(_Bool)arg1 session:(id)arg2;

@end
