/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOutputStream.h>

@interface NSOutputStream (NSOutputStream)

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)outputStreamToMemory;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(_Bool)arg2;
+ (id)outputStreamWithURL:(id)arg1 append:(_Bool)arg2;

- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToMemory;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasSpaceAvailable;
- (CDStruct_87dc826d)_cfStreamError;

@end
