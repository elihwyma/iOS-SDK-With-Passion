/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext

{
    BSXPCServiceConnectionRootContext *_parent;
    unsigned long long _identifier;
    _Bool _remote;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, getter=isRemote) _Bool remote;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (_Bool)isServer;
- (_Bool)isClient;
- (_Bool)isChild;
- (id)endpointDescription;
- (id)_initWithParent:(id)arg1 identifier:(unsigned long long)arg2 remote:(_Bool)arg3 proem:(id)arg4;

@end
