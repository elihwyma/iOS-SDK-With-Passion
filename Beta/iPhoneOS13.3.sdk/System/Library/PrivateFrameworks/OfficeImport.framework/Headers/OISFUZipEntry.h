/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OISFUDataRepresentation.h>

@class OISFUCryptoKey;

@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipEntry : OISFUDataRepresentation

{
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    _Bool mHasDataOffset;
    unsigned long long mEncodedLength;
    _Bool mHasEncodedLength;
    OISFUCryptoKey *mCryptoKey;
}

- (void)dealloc;
- (id)data;
- (_Bool)isEncrypted;
- (id)inputStream;
- (long long)encodedLength;
- (long long)dataLength;
- (_Bool)isReadable;
- (void)setDataLength:(long long)arg1;
- (_Bool)isCompressed;
- (unsigned long long)dataOffset;
- (unsigned int)crc;
- (void)setCryptoKey:(id)arg1;
- (void)copyToFile:(id)arg1;
- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;
- (void)setCompressionFlags:(unsigned short)arg1;
- (unsigned long long)calculateEncodedLength;
- (_Bool)isBackedByFile;
- (id)backingFilePath;
- (unsigned long long)backingFileDataOffset;

@end
