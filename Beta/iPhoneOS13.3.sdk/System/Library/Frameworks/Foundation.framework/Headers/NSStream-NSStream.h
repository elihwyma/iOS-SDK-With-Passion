/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSStream.h>

@interface NSStream (NSStream)

+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;

- (id)init;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;

@end
