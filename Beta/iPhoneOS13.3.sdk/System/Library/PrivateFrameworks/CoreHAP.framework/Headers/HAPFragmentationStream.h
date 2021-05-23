/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSMutableOrderedSet, NSNumber, NSObject;

@protocol HAPFragmentationStreamDelegate, OS_dispatch_queue;

@interface HAPFragmentationStream : HMFObject

{
    id <HAPFragmentationStreamDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableOrderedSet *_pendingPackets;
    NSNumber *_currentPacketTransactionIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSMutableOrderedSet *pendingPackets;
@property (retain, nonatomic) NSNumber *currentPacketTransactionIdentifier;
@property (weak) id <HAPFragmentationStreamDelegate> delegate;

+ (id)fragmentationPacketsForData:(id)arg1 maxLength:(unsigned long long)arg2 transactionIdentifier:(unsigned short)arg3;

- (id)init;
- (void)open;
- (void)close;
- (void)receivedFragmentedPacket:(id)arg1;
- (void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)arg1;
- (void)__addFragmentationPacket:(id)arg1;
- (_Bool)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)arg1;
- (id)__transactionDataWithTransactionIdentifier:(unsigned short)arg1;
- (id)__filteredPacketsWithTransactionIdentifier:(unsigned short)arg1;

@end
