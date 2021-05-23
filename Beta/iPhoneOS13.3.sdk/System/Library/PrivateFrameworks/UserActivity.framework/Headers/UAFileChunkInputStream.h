/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSInputStream.h>

@class NSFileHandle, NSNumber;

__attribute__((visibility("hidden")))
@interface UAFileChunkInputStream : NSInputStream

{
    NSFileHandle *_file;
    NSNumber *_chunkOffset;
    long long _chunkSize;
    NSNumber *_currentOffset;
    long long _readSize;
    unsigned long long _status;
}

@property (retain) NSFileHandle *file;
@property (retain) NSNumber *chunkOffset;
@property long long chunkSize;
@property (retain) NSNumber *currentOffset;
@property long long readSize;
@property unsigned long long status;

- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (id)initWithFileHandle:(id)arg1 offsetInFile:(id)arg2 size:(long long)arg3;

@end
