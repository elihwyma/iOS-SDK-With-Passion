/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NUPurgeableStoragePool;

@interface NUPurgeableStorageFactory : NSObject

{
    Class _storageClass;
    NUPurgeableStoragePool *_storagePool;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStorageClass:(Class)arg1;
- (id)newStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)returnStorage:(id)arg1;
- (id)initWithStoragePool:(id)arg1;
- (id)initWithStorageClass:(Class)arg1 storagePool:(id)arg2;

@end
