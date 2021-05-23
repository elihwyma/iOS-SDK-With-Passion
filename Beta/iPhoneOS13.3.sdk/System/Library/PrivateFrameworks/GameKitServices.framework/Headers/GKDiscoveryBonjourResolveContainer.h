/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKDiscoveryBonjour, NSMutableArray;

@interface GKDiscoveryBonjourResolveContainer : NSObject

{
    NSMutableArray *_serviceRefList;
    GKDiscoveryBonjour *_context;
    CDUnknownBlockType _resolveCompletionHandler;
}

@property (retain, nonatomic) NSMutableArray *serviceRefList;
@property (nonatomic) GKDiscoveryBonjour *context;
@property (copy, nonatomic) CDUnknownBlockType resolveCompletionHandler;

- (id)init;
- (void)dealloc;

@end
