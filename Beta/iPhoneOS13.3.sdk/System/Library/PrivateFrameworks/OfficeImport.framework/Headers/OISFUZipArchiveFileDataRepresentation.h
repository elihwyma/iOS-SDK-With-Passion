/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSString, OISFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation

{
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)path;
- (id)initWithPath:(id)arg1;
- (_Bool)isEncrypted;
- (id)inputStream;
- (long long)dataLength;
- (_Bool)isReadable;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;

@end
