/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogDirectoryReference : NSObject

{
    int _fd;
    long long _etk;
}

@property (nonatomic, readonly) int fileDescriptor;

- (void)dealloc;
- (void)close;
- (id)initWithDescriptor:(int)arg1;
- (id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char *)arg2;

@end
