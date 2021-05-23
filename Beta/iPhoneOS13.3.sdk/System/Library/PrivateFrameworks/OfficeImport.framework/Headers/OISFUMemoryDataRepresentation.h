/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation

{
    NSData *mData;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)data;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)inputStream;
- (long long)dataLength;
- (_Bool)isReadable;
- (id)bufferedInputStream;
- (unsigned long long)readIntoData:(id)arg1;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;

@end
