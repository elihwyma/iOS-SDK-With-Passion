/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueProxyGetter.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableCollectionGetter : NSKeyValueProxyGetter

{
    struct objc_ivar *_ivar;
}

- (struct objc_ivar *)ivar;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 containerIsa:(Class)arg3 ivar:(struct objc_ivar *)arg4 proxyClass:(Class)arg5;

@end
