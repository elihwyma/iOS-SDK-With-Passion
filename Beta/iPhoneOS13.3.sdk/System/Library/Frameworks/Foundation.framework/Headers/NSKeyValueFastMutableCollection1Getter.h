/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueMutatingCollectionMethodSet, NSKeyValueNonmutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter

{
    NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;
- (id)nonmutatingMethods;
- (id)mutatingMethods;

@end
