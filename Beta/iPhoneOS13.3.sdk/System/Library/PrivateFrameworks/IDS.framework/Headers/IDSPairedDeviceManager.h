/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSXPCDaemonController, NSSet, NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject

{
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
    _IDSCompletionHandler *_deliveryStatsCompletion;
    IDSXPCDaemonController *_xpcDaemonController;
    NSSet *_allowedTrafficClassifiers;
}

@property (retain, nonatomic) IDSXPCDaemonController *xpcDaemonController;
@property (retain, nonatomic) NSSet *allowedTrafficClassifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)setPairedDeviceInfo:(id)arg1;
- (void)deliveryStats:(id)arg1;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)getPairedDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)getDeliveryStatsWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)device:(id)arg1 pairingDeleted:(_Bool)arg2;
- (void)constructRAResponseDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
