/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKFileDataAccessor.h>

@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor

{
    NSData *_archiveData;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)archiveData;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeDiskRepresentation;

@end
