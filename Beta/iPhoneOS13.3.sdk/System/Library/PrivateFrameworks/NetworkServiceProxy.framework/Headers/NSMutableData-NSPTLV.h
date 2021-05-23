/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSPTLV)

- (void)enumerateTLVsUsingBlock:(CDUnknownBlockType)arg1;
- (void)appendType:(unsigned char)arg1 length:(unsigned short)arg2 value:(const void *)arg3;

@end
