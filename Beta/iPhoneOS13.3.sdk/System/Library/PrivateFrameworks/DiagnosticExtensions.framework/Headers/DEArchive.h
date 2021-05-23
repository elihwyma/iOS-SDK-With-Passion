/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface DEArchive : NSObject

{
    struct archive *_archive;
    _Bool _hasClosedArchive;
    NSURL *_tarGzUrl;
    NSURL *_sourceDir;
}

@property (retain) NSURL *tarGzUrl;
@property (retain) NSURL *sourceDir;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)closeArchive;
- (_Bool)addFile:(id)arg1 withPathName:(id)arg2;
- (struct archive *)archiverForUrl:(id)arg1;

@end
