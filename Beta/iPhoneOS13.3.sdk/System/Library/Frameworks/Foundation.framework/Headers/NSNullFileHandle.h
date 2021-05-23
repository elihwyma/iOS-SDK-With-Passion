/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileHandle.h>

__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle

- (int)fileDescriptor;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (void)writeData:(id)arg1;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)closeFile;
- (id)availableData;
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (_Bool)synchronizeAndReturnError:(out id *)arg1;
- (_Bool)closeAndReturnError:(out id *)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;

@end
