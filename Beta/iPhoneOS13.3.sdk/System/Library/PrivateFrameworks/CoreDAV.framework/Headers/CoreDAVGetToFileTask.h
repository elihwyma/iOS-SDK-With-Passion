/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask

{
    NSFileHandle *_destinationFile;
}

@property (retain, nonatomic) NSFileHandle *destinationFile;

- (_Bool)shouldLogResponseBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)initWithURL:(id)arg1 destinationFile:(id)arg2;

@end
