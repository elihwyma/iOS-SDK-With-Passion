/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKContainer;

@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyValueStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKContainer *_container;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKContainer *container;

- (id)initWithContainer:(id)arg1 queue:(id)arg2;
- (void)fetchDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
