/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface WPBase64Utils : NSObject

+ (id)encodeData:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (void)encodeInputStream:(id)arg1 withChunkHandler:(CDUnknownBlockType)arg2;
+ (void)encodeFileHandle:(id)arg1 withChunkHandler:(CDUnknownBlockType)arg2;

@end
