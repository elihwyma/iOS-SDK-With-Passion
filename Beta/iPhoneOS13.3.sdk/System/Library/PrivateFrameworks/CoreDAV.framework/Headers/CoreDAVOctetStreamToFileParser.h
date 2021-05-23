/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser

{
    NSFileHandle *_fileHandle;
}

@property (retain, nonatomic) NSFileHandle *fileHandle;

- (id)initWithFileHandle:(id)arg1;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;

@end
