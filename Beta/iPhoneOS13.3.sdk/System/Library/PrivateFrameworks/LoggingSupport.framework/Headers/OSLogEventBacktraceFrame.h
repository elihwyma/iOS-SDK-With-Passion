/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktraceFrame : NSObject

{
    unsigned char _uuid[16];
    NSUUID *_imageUUID;
    unsigned long long _imageOffset;
}

@property (nonatomic, readonly) NSUUID *imageUUID;
@property (nonatomic, readonly) const char *imageUUIDBytes;
@property (nonatomic, readonly) unsigned long long imageOffset;

- (void)dealloc;
- (id)initWithUUIDBytes:(const char *)arg1 andOffset:(unsigned long long)arg2;

@end
