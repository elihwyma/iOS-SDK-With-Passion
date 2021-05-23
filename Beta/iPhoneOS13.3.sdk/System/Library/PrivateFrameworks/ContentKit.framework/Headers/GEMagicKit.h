/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEMagicKit : NSObject

+ (struct magic_set *)sharedMagicCookie;
+ (id)magicForObject:(id)arg1 decompress:(_Bool)arg2;
+ (id)rawMagicOutputForObject:(id)arg1 cookie:(struct magic_set *)arg2 flags:(int)arg3;
+ (id)typeHierarchyForType:(id)arg1;
+ (id)magicForFileAtPath:(id)arg1;
+ (id)magicForFileAtURL:(id)arg1;
+ (id)magicForData:(id)arg1;
+ (id)magicForFileAtPath:(id)arg1 decompress:(_Bool)arg2;
+ (id)magicForFileAtURL:(id)arg1 decompress:(_Bool)arg2;
+ (id)magicForData:(id)arg1 decompress:(_Bool)arg2;

@end
