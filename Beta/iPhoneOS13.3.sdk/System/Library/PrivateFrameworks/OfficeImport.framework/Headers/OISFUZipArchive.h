/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString, OISFUCryptoKey, OISFUDataRepresentation;

@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipArchive : NSObject

{
    NSMutableDictionary *mEntries;
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    OISFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (_Bool)isZipArchiveAtPath:(id)arg1;

- (void)dealloc;
- (_Bool)isEncrypted;
- (id)passphraseHint;
- (id)entryWithName:(id)arg1;
- (void)readEntries;
- (void)setCryptoKey:(id)arg1;
- (id)allEntryNames;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)passphraseVerifier;
- (id)encryptedDocumentUuid;
- (_Bool)decompressAtPath:(id)arg1;
- (struct SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long *)arg2;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2 ignoreCase:(_Bool)arg3;
- (void)collapseCommonRootDirectoryIgnoreCase:(_Bool)arg1;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2 ignoreCase:(_Bool)arg3;
- (_Bool)decompressAtPath:(id)arg1 wasEmpty:(_Bool *)arg2;
- (id)commonRootDirectoryIgnoringCase:(_Bool)arg1;

@end
