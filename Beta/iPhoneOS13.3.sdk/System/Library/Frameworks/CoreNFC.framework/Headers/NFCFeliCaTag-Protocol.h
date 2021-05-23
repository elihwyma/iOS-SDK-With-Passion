/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@class NSData;

@protocol NFCFeliCaTag <Swift>

@property (retain, nonatomic, readonly) NSData *currentSystemCode;
@property (retain, nonatomic, readonly) NSData *currentIDm;

- (unsigned short)sendFeliCaCommandPacket:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)pollingWithSystemCode:requestCode:timeSlot:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestServiceWithNodeCodeList:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestResponseWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readWithoutEncryptionWithServiceCodeList:blockList:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeWithoutEncryptionWithServiceCodeList:blockList:blockData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSystemCodeWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestServiceV2WithNodeCodeList:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSpecificationVersionWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetModeWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
