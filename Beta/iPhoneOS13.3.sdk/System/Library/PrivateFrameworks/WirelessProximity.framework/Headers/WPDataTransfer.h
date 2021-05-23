/*
 Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSUUID;

@interface WPDataTransfer : NSObject

{
    _Bool _receivedFirstPacket;
    unsigned short _currentDataSize;
    NSMutableData *_currentReceivedData;
    NSUUID *_peerUUID;
}

@property (retain, nonatomic) NSMutableData *currentReceivedData;
@property (nonatomic) unsigned short currentDataSize;
@property (nonatomic) _Bool receivedFirstPacket;
@property (retain, nonatomic) NSUUID *peerUUID;

- (id)initDataTransferForPeer:(id)arg1;
- (void)resetTransfer;
- (_Bool)addNewData:(id)arg1;

@end
