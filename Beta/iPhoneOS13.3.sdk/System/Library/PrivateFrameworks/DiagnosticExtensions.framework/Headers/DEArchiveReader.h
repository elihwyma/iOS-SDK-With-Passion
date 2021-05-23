/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@interface DEArchiveReader : NSObject

{
    struct archive *_archive;
}

- (id)initWithURL:(id)arg1;
- (void)closeArchive;
- (id)listContainedPaths;

@end
