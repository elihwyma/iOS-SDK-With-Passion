/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUDigest : NSObject

{
    NSString *_stringValue;
    struct CC_MD5state_st _context;
}

- (id)init;
- (void)finalize;
- (id)stringValue;
- (void)addString:(id)arg1;
- (void)addCString:(const char *)arg1;
- (void)addBytes:(const void *)arg1 length:(long long)arg2;

@end
