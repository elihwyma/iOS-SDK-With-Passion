/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@class NSData;

@protocol NFCMiFareTag <Swift>

@property (nonatomic, readonly) unsigned long long mifareFamily;
@property (copy, nonatomic, readonly) NSData *identifier;
@property (copy, nonatomic, readonly) NSData *historicalBytes;

- (unsigned short)sendMiFareCommand:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMiFareISO7816Command:completionHandler: /* Error: Ran out of types for this method. */;

@end
