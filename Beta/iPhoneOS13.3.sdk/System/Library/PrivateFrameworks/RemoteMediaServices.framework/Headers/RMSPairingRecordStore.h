/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RMSPairingRecordStore : NSObject

{
    NSMutableDictionary *_pairingRecords;
}

+ (id)sharedRecordStore;

- (id)init;
- (void)_synchronizePreferences;
- (id)allPairingRecords;
- (id)pairedServiceNetworkNames;
- (id)pairingRecordForServiceWithNetworkName:(id)arg1;
- (void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2;
- (void)removePairingRecordForServiceWithNetworkName:(id)arg1;

@end
