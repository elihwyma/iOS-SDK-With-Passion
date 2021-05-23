/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASCompression : NSObject

+ (id)compress:(id)arg1 fast:(_Bool)arg2;
+ (id)compress:(id)arg1 lowMemory:(_Bool)arg2;
+ (id)fastCompress:(id)arg1;
+ (id)_compress:(id)arg1 fast:(_Bool)arg2 lowMemory:(_Bool)arg3;
+ (id)decompress:(id)arg1;
+ (id)decompress:(id)arg1 maxLength:(long long)arg2;

@end
