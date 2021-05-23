/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@protocol NFCNDEFTag <Swift>

@property (nonatomic, readonly, getter=isAvailable) _Bool available;

- (unsigned short)queryNDEFStatusWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readNDEFWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeNDEF:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeLockWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
