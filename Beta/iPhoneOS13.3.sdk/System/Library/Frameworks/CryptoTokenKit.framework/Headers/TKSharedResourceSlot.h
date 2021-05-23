/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSString, TKSharedResource;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TKSharedResourceSlot : NSObject

{
    NSString *_name;
    TKSharedResource *_resource;
    id _object;
    NSObject<OS_dispatch_source> *_idleTimer;
    CDUnknownBlockType _createObjectBlock;
    CDUnknownBlockType _objectDestroyedBlock;
    double _idleTimeout;
    NSObject<OS_dispatch_queue> *_idleQueue;
}

@property (copy, nonatomic) CDUnknownBlockType createObjectBlock;
@property (copy, nonatomic) CDUnknownBlockType objectDestroyedBlock;
@property (nonatomic) double idleTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleQueue;

- (void)dealloc;
- (id)description;
- (id)object;
- (id)initWithName:(id)arg1;
- (id)resourceWithError:(id *)arg1;
- (void)destroyObject;
- (void)releaseResource;

@end
