/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TSPersistence)

- (_Bool)setDefaultFileProtectionAtDocumentURL:(id)arg1 error:(id *)arg2;
- (_Bool)setDefaultFileProtectionForDirectoryPath:(id)arg1 error:(id *)arg2;
- (void)assertDefaultFileProtectionAtDocumentURL:(id)arg1;

@end
