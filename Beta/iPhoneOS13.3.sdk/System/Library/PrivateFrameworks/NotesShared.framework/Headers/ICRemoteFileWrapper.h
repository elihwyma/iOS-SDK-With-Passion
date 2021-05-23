/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSFileWrapper.h>

@class NSData, NSURL;

@interface ICRemoteFileWrapper : NSFileWrapper

{
    NSURL *_remoteURL;
    NSData *_cachedData;
}

@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSData *cachedData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDirectory;
- (id)fileAttributes;
- (id)preferredFilename;
- (id)fileWrappers;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (_Bool)isSymbolicLink;
- (_Bool)matchesContentsOfURL:(id)arg1;
- (_Bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)filename;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)regularFileContents;
- (id)symbolicLinkDestinationURL;
- (id)keyForFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)dataWithError:(id *)arg1;
- (id)initWithRemoteURL:(id)arg1;

@end
