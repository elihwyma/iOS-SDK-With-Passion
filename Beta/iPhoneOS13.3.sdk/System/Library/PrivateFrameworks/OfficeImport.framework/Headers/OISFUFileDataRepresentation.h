/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSString, OISFUCryptoKey;

@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUFileDataRepresentation : OISFUDataRepresentation

{
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    _Bool mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    id <SFUInputStream> mInputStream;
    _Bool mDeleteFileWhenDone;
}

- (void)dealloc;
- (id)description;
- (id)path;
- (id)initWithPath:(id)arg1;
- (unsigned int)fileType;
- (_Bool)isEncrypted;
- (id)inputStream;
- (void)setFileType:(unsigned int)arg1;
- (long long)encodedLength;
- (long long)dataLength;
- (_Bool)isReadable;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (_Bool)isCryptoKeyIdenticalToKey:(id)arg1;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (void)readFileAttributes;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (void)deleteFileWhenDone;

@end
