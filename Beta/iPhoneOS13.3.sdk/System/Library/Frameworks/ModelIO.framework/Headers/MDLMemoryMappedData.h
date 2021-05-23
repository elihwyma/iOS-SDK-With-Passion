/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@interface MDLMemoryMappedData : NSObject

{
    struct __sFILE *_file;
    char *_mappedAddr;
    char *_fileStart;
    long long _mappedFileSize;
    long long _length;
}

- (void)dealloc;
- (id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)dataNoCopy;

@end
