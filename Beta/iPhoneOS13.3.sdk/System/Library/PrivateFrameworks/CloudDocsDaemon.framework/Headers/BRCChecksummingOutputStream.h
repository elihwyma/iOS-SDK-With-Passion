/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSOutputStream.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BRCChecksummingOutputStream : NSOutputStream

{
    struct CC_SHA1state_st _ctx;
    unsigned char _sig[21];
    _Bool _isOpen;
}

@property (nonatomic, readonly) NSData *signature;

+ (id)checksummingOutputStreamWithTag:(unsigned char)arg1;

- (void)open;
- (void)close;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasSpaceAvailable;
- (id)initWithTag:(unsigned char)arg1;

@end
