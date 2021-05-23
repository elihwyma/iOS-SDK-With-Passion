/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@class NSData, NSString;

@protocol NFCISO7816Tag <Swift>

@property (retain, nonatomic, readonly) NSString *initialSelectedAID;
@property (copy, nonatomic, readonly) NSData *identifier;
@property (copy, nonatomic, readonly) NSData *historicalBytes;
@property (copy, nonatomic, readonly) NSData *applicationData;
@property (nonatomic, readonly) _Bool proprietaryApplicationDataCoding;

- (unsigned short)sendCommandAPDU:completionHandler: /* Error: Ran out of types for this method. */;

@end
