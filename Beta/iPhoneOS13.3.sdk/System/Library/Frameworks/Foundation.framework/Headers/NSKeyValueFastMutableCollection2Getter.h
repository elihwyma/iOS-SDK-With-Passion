/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueMutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter

{
    NSKeyValueGetter *_baseGetter;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

- (void)dealloc;
- (id)mutatingMethods;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;
- (id)baseGetter;

@end
