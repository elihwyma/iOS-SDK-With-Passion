/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCTag.h>

@class NSData, NSString;

@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCFeliCaTag : NFCTag

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic, readonly) id <NFCReaderSession> session;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (retain, nonatomic, readonly) NSData *currentSystemCode;
@property (retain, nonatomic, readonly) NSData *currentIDm;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)sendFeliCaCommandPacket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pollingWithSystemCode:(id)arg1 requestCode:(long long)arg2 timeSlot:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestServiceWithNodeCodeList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readWithoutEncryptionWithServiceCodeList:(id)arg1 blockList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeWithoutEncryptionWithServiceCodeList:(id)arg1 blockList:(id)arg2 blockData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestSystemCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestServiceV2WithNodeCodeList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSpecificationVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetModeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
