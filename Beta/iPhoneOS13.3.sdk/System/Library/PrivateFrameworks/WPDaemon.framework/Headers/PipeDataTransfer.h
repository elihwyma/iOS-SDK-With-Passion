/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData, NSUUID;

@interface PipeDataTransfer : NSObject

{
    unsigned char _txSeqNum;
    unsigned char _rxSeqNum;
    _Bool _rxFirstPacket;
    _Bool _rxWaitForMoreData;
    unsigned short _txTotalLenToSend;
    unsigned short _rxTotalLenToReceive;
    unsigned short _rxCurrentDataSize;
    NSUUID *_peerUUID;
    NSData *_txTotalDataToSend;
    NSData *_txData;
    unsigned long long _txDataLeftToSend;
    NSData *_rxTotalDataToReceive;
    NSData *_rxData;
    NSMutableData *_rxCurrentReceivedData;
    NSMutableData *_rxTotalDataWithLen;
}

@property (retain) NSUUID *peerUUID;
@property unsigned char txSeqNum;
@property unsigned short txTotalLenToSend;
@property (retain) NSData *txTotalDataToSend;
@property (retain) NSData *txData;
@property unsigned long long txDataLeftToSend;
@property unsigned char rxSeqNum;
@property _Bool rxFirstPacket;
@property unsigned short rxTotalLenToReceive;
@property (retain) NSData *rxTotalDataToReceive;
@property (retain) NSData *rxData;
@property unsigned short rxCurrentDataSize;
@property (retain) NSMutableData *rxCurrentReceivedData;
@property (retain) NSMutableData *rxTotalDataWithLen;
@property _Bool rxWaitForMoreData;

- (id)description;
- (void)resetRxTransfer;
- (void)resetTxTransfer;
- (id)initPipeDataTransferForPeer:(id)arg1;
- (void)resetAllTransfer;
- (unsigned char)generateSequenceNumber;

@end
