/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TSUTemporaryDirectoryAdditions)

- (_Bool)changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;
- (_Bool)changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(_Bool)arg4 error:(id *)arg5;
- (_Bool)hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(_Bool)arg3;
- (_Bool)grantUserWritePosixPermissionAtPath:(id)arg1 error:(id *)arg2;
- (unsigned long long)directoryUsage:(id)arg1;
- (_Bool)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4 shouldUpdateAttributesHandler:(CDUnknownBlockType)arg5;
- (_Bool)_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(_Bool)arg4 error:(id *)arg5;
- (_Bool)_fileProtectionAtURL:(id)arg1 recursively:(_Bool)arg2 passesTest:(CDUnknownBlockType)arg3;
- (_Bool)_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (void)_logFileProtectionAtURL:(id)arg1 recursively:(_Bool)arg2 indent:(id)arg3;
- (unsigned long long)pathUsage:(id)arg1;
- (_Bool)applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;
- (_Bool)hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(_Bool)arg3;
- (void)logFileProtectionAtURL:(id)arg1 recursively:(_Bool)arg2;

@end
