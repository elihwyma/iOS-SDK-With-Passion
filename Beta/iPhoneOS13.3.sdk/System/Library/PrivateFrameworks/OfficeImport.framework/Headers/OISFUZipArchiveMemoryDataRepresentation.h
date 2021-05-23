/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveMemoryDataRepresentation : OISFUDataRepresentation

{
    NSData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)data;
- (id)inputStream;
- (long long)dataLength;
- (_Bool)isReadable;
- (id)bufferedInputStream;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;

@end
