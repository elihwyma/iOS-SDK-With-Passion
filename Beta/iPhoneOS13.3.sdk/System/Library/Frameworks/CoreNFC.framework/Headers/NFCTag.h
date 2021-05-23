/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol NFCReaderSession, NFTag, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NFCTag : NSObject <Swift>

{
    id <NFTag> _tag;
    NSNumber *_sessionKey;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    long long _configuration;
}

@property (nonatomic, readonly) long long configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic, readonly) id <NFCReaderSession> session;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)_MaxRetry;
+ (double)_MaxRetryInterval;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (unsigned long long)capacity;
- (void)disconnect;
- (void)_setDelegateQueue:(id)arg1;
- (_Bool)isReadOnly;
- (id)applicationData;
- (_Bool)isEqualToNFTag:(id)arg1;
- (id)selectedAID;
- (id)systemCode;
- (id)historicalBytes;
- (void)_setSession:(id)arg1;
- (void)_connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dispatchOnDelegateQueueAsync:(CDUnknownBlockType)arg1;
- (void)_transceiveWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)asNFCISO15693Tag;
- (id)asNFCISO7816Tag;
- (id)asNFCFeliCaTag;
- (id)asNFCMiFareTag;
- (void)queryNDEFStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readNDEFWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeNDEF:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeLockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;
- (void)_sendAPDU:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_getInternalReaderSession;
- (_Bool)_transceiveWithSession:(id)arg1 sendData:(id)arg2 receivedData:(id *)arg3 error:(id *)arg4;
- (void)_setTag:(id)arg1;
- (id)_translateNFCDError:(id)arg1;
- (_Bool)_connectWithSession:(id)arg1 outError:(id *)arg2;
- (_Bool)_disconnectWithError:(id *)arg1;
- (_Bool)isNDEFFormatted;
- (_Bool)proprietaryApplicationDataCoding;
- (_Bool)isMatchingSession:(id)arg1 outError:(id *)arg2;

@end
