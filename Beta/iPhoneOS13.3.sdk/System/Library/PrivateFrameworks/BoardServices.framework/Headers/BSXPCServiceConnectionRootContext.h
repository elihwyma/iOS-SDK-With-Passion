/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext

{
    unsigned long long _unique;
    _Atomic unsigned long long __uniqueChildCounter;
    NSString *_eDesc;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (_Bool)isRoot;
- (id)endpointDescription;
- (id)_initWithType:(BOOL)arg1 eDesc:(id)arg2;
- (id)uniqueChildContext;
- (id)childContextWithRemoteIdentifier:(unsigned long long)arg1;

@end
