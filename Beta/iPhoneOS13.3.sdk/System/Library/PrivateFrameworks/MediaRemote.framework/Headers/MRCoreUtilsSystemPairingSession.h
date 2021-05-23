/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)pairingManager;
+ (_Bool)systemPairingAvailable;
+ (id)globalPairingQueue;

- (_Bool)shouldRetry;
- (id)removePeer;
- (id)updatePeer;
- (id)updateMediaRemotePairedDevice:(id)arg1;
- (id)pairedPeerDevices;
- (struct NSMutableDictionary *)mediaRemotePairedDevices;
- (void *)_createPeerDeviceFromPairedPeer:(id)arg1;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;
- (_Bool)shouldAutoRetryPairingExchange:(id)arg1;
- (id)addPeer;
- (id)pairedPeerDevice;
- (id)pairedPeerFromPeerDevice:(void *)arg1;

@end
