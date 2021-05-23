/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (RFC2231Support)

- (void)mf_appendCString:(const char *)arg1;
- (void)mf_makeImmutable;
- (void)mf_appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange)arg1;

@end
