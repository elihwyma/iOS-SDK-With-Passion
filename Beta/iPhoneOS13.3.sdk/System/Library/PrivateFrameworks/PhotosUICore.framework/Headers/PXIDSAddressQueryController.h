/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class IDSBatchIDQueryController, NSMutableArray, NSMutableDictionary, NSString;

@interface PXIDSAddressQueryController : NSObject

{
    NSMutableDictionary *_queryStateForAddress;
    NSMutableArray *_queries;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)performBatchQueryForAddresses:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;

@end
