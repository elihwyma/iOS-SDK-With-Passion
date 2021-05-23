/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSData;

@interface NSFileHandle : NSObject <Swift>

@property (readonly) unsigned long long offsetInFile;
@property (copy, readonly) NSData *availableData;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id *)arg2;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;
+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (int)fileDescriptor;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (void)writeData:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)closeFile;
- (id)initWithFileDescriptor:(int)arg1;
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
- (void)_closeOnDealloc;

@end
