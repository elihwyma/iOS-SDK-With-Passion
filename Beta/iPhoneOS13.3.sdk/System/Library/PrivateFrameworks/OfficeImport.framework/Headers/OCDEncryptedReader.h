/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

__attribute__((visibility("hidden")))
@interface OCDEncryptedReader : OCDReader

{
    OCCDecryptor *mDecryptor;
}

@property (nonatomic, readonly) OCCDecryptor *decryptor;

- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;
- (void)restartReaderToUseDecryptedDocument;
- (void)useUnencryptedDocument;
- (id)defaultPassphrase;

@end
