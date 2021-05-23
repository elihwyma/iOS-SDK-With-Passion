/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface PFZipCentralDirectoryFileHeader : NSObject

{
    unsigned short _versionMadeBy;
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    unsigned short _fileCommentLength;
    unsigned short _fileStartDiskNumber;
    unsigned short _internalFileAttrs;
    unsigned int _externalFileAttrs;
    unsigned int _localFileHeaderRelativeOffset;
    NSString *_filename;
    NSData *_extraFieldData;
    NSString *_fileComment;
}

@property (nonatomic) unsigned short versionMadeBy;
@property (nonatomic) unsigned short versionNeededToExtract;
@property (nonatomic) unsigned short generalPurposeBit;
@property (nonatomic) unsigned short compressionMethod;
@property (nonatomic) unsigned short lastModTime;
@property (nonatomic) unsigned short lastModDate;
@property (nonatomic) unsigned int crc32;
@property (nonatomic) unsigned int compressedSize;
@property (nonatomic) unsigned int uncompressedSize;
@property (nonatomic, readonly) unsigned short filenameLength;
@property (nonatomic, readonly) unsigned short extraFieldLength;
@property (nonatomic, readonly) unsigned short fileCommentLength;
@property (nonatomic) unsigned short fileStartDiskNumber;
@property (nonatomic) unsigned short internalFileAttrs;
@property (nonatomic) unsigned int externalFileAttrs;
@property (nonatomic) unsigned int localFileHeaderRelativeOffset;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSData *extraFieldData;
@property (retain, nonatomic) NSString *fileComment;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (void)appendToData:(id)arg1;

@end
