/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface ICArchiveWriter : NSObject

{
    struct archive *_archive;
    _Bool _usesCompression;
    _Bool _flatten;
    NSString *_flattenFolderName;
    NSURL *_destinationURL;
    NSString *_basePath;
}

@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSString *basePath;
@property (nonatomic) _Bool usesCompression;
@property (nonatomic) _Bool flatten;
@property (retain, nonatomic) NSString *flattenFolderName;

- (void)dealloc;
- (_Bool)finish:(id *)arg1;
- (_Bool)open:(id *)arg1;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;
- (_Bool)writeURLs:(id)arg1 error:(id *)arg2;
- (_Bool)writeURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;

@end
