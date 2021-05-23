/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICArchiveReader : NSObject

{
    struct archive *_archive;
    NSString *_sourcePath;
    NSString *_destinationPath;
}

@property (retain, nonatomic) NSString *sourcePath;
@property (retain, nonatomic) NSString *destinationPath;

- (_Bool)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
- (_Bool)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id *)arg3 error:(id *)arg4;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (_Bool)unarchiveResultURLs:(id *)arg1 error:(id *)arg2;

@end
