/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFFileIStream.h>

@class NSString;

@interface PFFileIOStream : PFFileIStream

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)reserveLength:(long long)arg1;
- (_Bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long *)arg3;
- (_Bool)writeStream:(id)arg1;
- (_Bool)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;
- (_Bool)truncateLength:(long long)arg1;
- (_Bool)openStream;

@end
