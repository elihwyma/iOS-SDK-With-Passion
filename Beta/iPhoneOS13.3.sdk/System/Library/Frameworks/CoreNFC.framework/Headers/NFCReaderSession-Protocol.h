/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@class NSString;

@protocol NFCReaderSession <Swift>

@property (nonatomic, readonly, getter=isReady) _Bool ready;
@property (copy, nonatomic) NSString *alertMessage;

- (unsigned short)invalidateSession;
- (unsigned short)beginSession;
- (unsigned short)invalidateSessionWithErrorMessage: /* Error: Ran out of types for this method. */;

@end
