/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface NSFileWrapper : NSObject <Swift>

{
    NSDictionary *_fileAttributes;
    NSString *_preferredFileName;
    NSString *_fileName;
    id _contents;
    id _icon;
    id _moreVars;
}

@property (readonly, getter=isDirectory) _Bool directory;
@property (readonly, getter=isRegularFile) _Bool regularFile;
@property (readonly, getter=isSymbolicLink) _Bool symbolicLink;
@property (copy) NSString *preferredFilename;
@property (copy) NSString *filename;
@property (copy) NSDictionary *fileAttributes;
@property (copy, readonly) NSData *serializedRepresentation;
@property (copy, readonly) NSDictionary *fileWrappers;
@property (copy, readonly) NSData *regularFileContents;
@property (copy, readonly) NSURL *symbolicLinkDestinationURL;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)_pathForURL:(id)arg1 reading:(_Bool)arg2 error:(id *)arg3;
+ (_Bool)_canSafelyMapFilesAtPath:(id)arg1;
+ (_Bool)_forPath:(id)arg1 getItemKind:(id *)arg2 modificationDate:(id *)arg3;
+ (id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;
+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id *)arg2;
+ (_Bool)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id *)arg6;
+ (_Bool)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)initRegularFileWithContents:(id)arg1;
- (_Bool)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (id)_addChild:(id)arg1 forUniqueFileName:(id)arg2;
- (void)_initDirectoryContents;
- (id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5;
- (void)_removeParent:(id)arg1;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (void)_observePreferredFileNameOfChild:(id)arg1;
- (_Bool)_matchesItemKind:(id)arg1 modificationDate:(id)arg2;
- (_Bool)matchesContentsOfURL:(id)arg1;
- (_Bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (_Bool)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id *)arg2;
- (void)_updateDescendantFileNames;
- (_Bool)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(_Bool)arg4 didHardLinking:(_Bool *)arg5 error:(id *)arg6;
- (id)_attributesToWrite;
- (id)_newImpl;
- (void)_addParent:(id)arg1;
- (id)keyForFileWrapper:(id)arg1;
- (void)_resetFileModificationDate;
- (id)_uniqueFileNameOfChild:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)_fullDescription:(_Bool)arg1;

@end
