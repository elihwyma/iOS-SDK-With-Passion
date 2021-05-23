/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject

{
    NSString *_proem;
}

@property (copy, nonatomic, readonly) NSString *loggingProem;
@property (copy, nonatomic, readonly) NSString *endpointDescription;
@property (nonatomic, readonly, getter=isServer) _Bool server;
@property (nonatomic, readonly, getter=isClient) _Bool client;
@property (nonatomic, readonly, getter=isRoot) _Bool root;
@property (nonatomic, readonly, getter=isChild) _Bool child;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithProem:(id)arg1;

@end
