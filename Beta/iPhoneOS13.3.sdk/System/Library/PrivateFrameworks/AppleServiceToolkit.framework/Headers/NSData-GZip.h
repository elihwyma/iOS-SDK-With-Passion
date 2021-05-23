/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSData.h>

@interface NSData (GZip)

- (void)_resizeOutputBuffer:(id)arg1 forStream:(struct z_stream_s *)arg2;
- (id)dataGZipDeflated;

@end
