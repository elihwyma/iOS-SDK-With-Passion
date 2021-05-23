/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString, OISFUCryptoKey, OISFUMoveableFileOutputStream, OISFUZipFreeSpaceEntry, OISFUZipOutputEntry;

@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveOutputStream : NSObject <Swift>

{
    OISFUMoveableFileOutputStream *mOutputStream;
    OISFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    OISFUZipOutputEntry *mCurrentEntry;
    OISFUZipOutputEntry *mLastEntryInFile;
    id <SFUOutputStream> mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    OISFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1;
+ (_Bool)createZipWithItemsAtPath:(id)arg1 zippedPath:(id)arg2 rootPathComponentName:(id)arg3;

- (void)dealloc;
- (void)close;
- (id)initWithPath:(id)arg1;
- (void)reset;
- (void)flush;
- (id)entryNames;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)moveToPath:(id)arg1;
- (unsigned int)crc32ForEntry:(id)arg1;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (void)finishEntry;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)beginEntryWithName:(id)arg1 isCompressed:(_Bool)arg2 uncompressedSize:(unsigned long long)arg3;
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(_Bool)arg2;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(_Bool)arg2;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;
- (_Bool)canRemoveEntryWithName:(id)arg1;
- (void)removeEntryWithName:(id)arg1;
- (void)setEncryptedDocumentUuid:(id)arg1;
- (id)entriesAtPath:(id)arg1;
- (unsigned long long)freeBytes;
- (void)coalesceAndTruncateFreeSpace;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;

@end
