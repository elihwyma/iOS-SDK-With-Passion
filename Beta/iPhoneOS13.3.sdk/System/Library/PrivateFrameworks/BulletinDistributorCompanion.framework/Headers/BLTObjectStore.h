/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface BLTObjectStore : NSObject

{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    Class _elementClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)objectCache:(id)arg1 keysWithBlock:(CDUnknownBlockType)arg2;
- (void)objectCache:(id)arg1 objectForKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)objectCache:(id)arg1 storeObject:(id)arg2 withKey:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)objectCache:(id)arg1 removeObjectForKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithPath:(id)arg1 elementClass:(Class)arg2;

@end
