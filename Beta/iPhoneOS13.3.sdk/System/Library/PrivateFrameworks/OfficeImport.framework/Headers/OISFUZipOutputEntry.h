/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUZipOutputEntry : NSObject

{
    NSString *name;
    unsigned long long utf8NameLength;
    _Bool isCompressed;
    _Bool isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    _Bool isWrittenDirectlyToFile;
    _Bool is64Bit;
}

- (void)dealloc;
- (id)description;
- (long long)compareByOffset:(id)arg1;

@end
