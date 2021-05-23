/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject

{
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (id)init;
- (id)name;
- (void)start;
- (id)client;
- (_Bool)isAvailable;
- (long long)transportType;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDeviceID:(id)arg1;
- (void)cancelOutstandingOperations;
- (void)registerRequestIDsWithClient:(id)arg1;
- (id)myDeviceID;
- (_Bool)isTransportActiveForPeer:(id)arg1;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)transformResponseError:(id)arg1;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(_Bool)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;

@end
