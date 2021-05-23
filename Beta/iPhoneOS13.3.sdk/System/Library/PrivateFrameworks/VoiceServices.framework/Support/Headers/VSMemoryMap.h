/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSMemoryMap : NSObject

{
    int _fd;
    NSString *_filePath;
    unsigned long long _fileSize;
    void *_mappedData;
}

@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) void *mappedData;
@property (nonatomic, readonly) int fd;

- (void)dealloc;
- (id)initWithFilePath:(id)arg1;
- (_Bool)mmap;
- (void)madvise;

@end
