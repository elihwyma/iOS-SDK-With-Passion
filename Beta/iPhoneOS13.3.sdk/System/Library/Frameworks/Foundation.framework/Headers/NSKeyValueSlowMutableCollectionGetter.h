/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter

{
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}

- (void)dealloc;
- (id)baseGetter;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6;
- (id)baseSetter;
- (_Bool)treatNilValuesLikeEmptyCollections;

@end
