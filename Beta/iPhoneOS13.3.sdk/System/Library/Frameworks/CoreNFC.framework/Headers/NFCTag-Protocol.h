/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@protocol NFCReaderSession;

@protocol NFCTag <Swift>

@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic, readonly) id <NFCReaderSession> session;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;

- (unsigned short)asNFCISO15693Tag;
- (unsigned short)asNFCISO7816Tag;
- (unsigned short)asNFCFeliCaTag;
- (unsigned short)asNFCMiFareTag;

@end
