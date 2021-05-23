/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDEncryptedReader.h>

__attribute__((visibility("hidden")))
@interface OCBReader : OCDEncryptedReader

{
    struct OcBinaryReader *mBinaryReader;
    struct __sFILE *mFile;
}

@property (nonatomic) struct OcBinaryReader *binaryReader;
@property (nonatomic) struct __sFILE *file;
@property (nonatomic, readonly) struct OCCEncryptionInfoReader *encryptionInfoReader;

- (void)dealloc;
- (void)closeFile;
- (_Bool)start;
- (id)read;
- (id)initWithCancelDelegate:(id)arg1;
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (_Bool)isBinaryReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilename:(id)arg2;
- (void)restartReaderToUseDecryptedDocument;

@end
