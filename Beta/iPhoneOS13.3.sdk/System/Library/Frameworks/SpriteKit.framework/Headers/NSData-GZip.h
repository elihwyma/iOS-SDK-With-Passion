/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSData.h>

@interface NSData (GZip)

+ (id)makeArchive:(const void *)arg1 length:(unsigned long long)arg2 level:(float)arg3;

- (id)gzipInflate;
- (id)gzipDeflate:(float)arg1;

@end
