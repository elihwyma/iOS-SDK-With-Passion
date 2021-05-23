/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)addNode:(id)arg1;
- (void)_addNode:(id)arg1;
- (id)cachedNodeForNode:(id)arg1;
- (id)retrieveAndCacheNode:(id)arg1;

@end
