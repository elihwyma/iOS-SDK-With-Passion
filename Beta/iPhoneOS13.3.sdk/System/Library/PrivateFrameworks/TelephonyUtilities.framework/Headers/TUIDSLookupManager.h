/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, TUIDSBatchIDQueryController, TUIDSIDQueryController;

@interface TUIDSLookupManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUIDSIDQueryController> _queryController;
    NSMutableDictionary *_idsFaceTimeVideoStatuses;
    NSMutableDictionary *_idsFaceTimeAudioStatuses;
    NSMutableDictionary *_idsFaceTimeMultiwayStatuses;
    id <TUIDSBatchIDQueryController> _batchQuerySearchVideoController;
    id <TUIDSBatchIDQueryController> _batchQuerySearchAudioController;
    id <TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;
    CDUnknownBlockType _batchQueryControllerCreationBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <TUIDSIDQueryController> queryController;
@property (nonatomic, readonly) NSMutableDictionary *idsFaceTimeVideoStatuses;
@property (nonatomic, readonly) NSMutableDictionary *idsFaceTimeAudioStatuses;
@property (nonatomic, readonly) NSMutableDictionary *idsFaceTimeMultiwayStatuses;
@property (retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchVideoController;
@property (retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchAudioController;
@property (retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;
@property (copy, nonatomic) CDUnknownBlockType batchQueryControllerCreationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (_Bool)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (id)initWithQueryController:(id)arg1;
- (void)cancelQueries;
- (_Bool)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;
- (_Bool)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;
- (_Bool)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1;
- (_Bool)isFaceTimeVideoAvailableForItem:(id)arg1;
- (_Bool)isFaceTimeAudioAvailableForItem:(id)arg1;
- (_Bool)isFaceTimeMultiwayAvailableForItem:(id)arg1;
- (void)beginQueryWithDestinations:(id)arg1;

@end
