/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISHashError, NSArray, NSString;

@interface ISHashedDownloadProvider

{
    int _fileDescriptor;
    NSArray *_hashes;
    ISHashError *_lastHashError;
    NSString *_localFilePath;
    struct CC_MD5state_st _md5Context;
    long long _numberOfBytesToHash;
    _Bool _shouldResumeFromLocalBytes;
    long long _totalBytesWritten;
    long long _validatedBytes;
}

@property (copy) ISHashError *lastHashError;
@property long long streamedBytes;
@property long long validatedBytes;
@property (retain) NSString *localFilePath;
@property _Bool shouldResumeFromLocalBytes;
@property (retain) NSArray *hashes;
@property long long numberOfBytesToHash;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)closeStream;
- (void)setup;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (_Bool)isStream;
- (void)resetStream;
- (_Bool)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (void)_closeFile;
- (_Bool)_writeDataWithoutHashing:(id)arg1 returningError:(id *)arg2;
- (_Bool)_writeDataWithHashing:(id)arg1 returningError:(id *)arg2;
- (_Bool)_openFile;
- (_Bool)_truncateToSize:(long long)arg1;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1;
- (_Bool)_checkHashForByteCount:(long long)arg1;

@end
