/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKChunkedFile : NSObject

{
    int mFileDescriptor;
}

+ (long long)preferredChunkSizeForFileDescriptor:(int)arg1;
+ (void)assertFileDescriptorIsValid:(int)arg1;

- (id)init;
- (id)initWithFileDescriptor:(int)arg1;
- (long long)readNextChunkIntoBuffer:(id)arg1 error:(id *)arg2;

@end
