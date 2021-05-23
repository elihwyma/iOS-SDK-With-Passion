/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/Swift-Protocol.h>

@protocol HAPStreamDelegate <Swift>

- (unsigned short)streamDidSuspend: /* Error: Ran out of types for this method. */;
- (unsigned short)streamDidResume: /* Error: Ran out of types for this method. */;
- (unsigned short)stream:didCloseWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)stream:didFailToWriteDataWithIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)stream:didReceiveData:withIdentifier: /* Error: Ran out of types for this method. */;

@end
