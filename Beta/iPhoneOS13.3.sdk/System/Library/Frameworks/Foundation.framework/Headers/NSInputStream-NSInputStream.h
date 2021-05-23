/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSInputStream.h>

@interface NSInputStream (NSInputStream)

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithURL:(id)arg1;

- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (CDStruct_87dc826d)_cfStreamError;

@end
