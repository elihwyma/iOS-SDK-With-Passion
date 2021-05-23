/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface PFZipLocalFileHeader : NSObject

{
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
    NSString *_filename;
    NSData *_extraFieldData;
}

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
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSData *extraFieldData;
@property (nonatomic, readonly) unsigned int totalHeaderLength;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (void)appendToData:(id)arg1;

@end
