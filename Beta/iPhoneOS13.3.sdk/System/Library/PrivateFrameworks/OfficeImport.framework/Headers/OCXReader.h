/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : OCDEncryptedReader

{
    OCPZipPackage *mZipPackage;
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (_Bool)start;
- (id)read;
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (_Bool)isBinaryReader;
- (_Bool)verifyFileFormat;
- (void)restartReaderToUseDecryptedDocument;

@end
