/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/Swift-Protocol.h>

@class NSDocInfo, NSString;

__attribute__((visibility("hidden")))
@interface NSLeafProxy <Swift>

{
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    long long refCount;
    id realObject;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)forwardInvocation:(id)arg1;

- (_Bool)isProxy;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (void)reallyDealloc;

@end
