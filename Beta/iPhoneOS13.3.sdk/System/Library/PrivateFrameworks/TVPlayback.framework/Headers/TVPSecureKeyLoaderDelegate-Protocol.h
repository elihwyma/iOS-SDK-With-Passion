/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/Swift-Protocol.h>

@protocol TVPSecureKeyLoaderDelegate <Swift>

- (unsigned short)secureKeyLoader:didLoadKeyResponseData:renewalDate:forRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)secureKeyLoader:didFailWithError:forRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)secureKeyLoader:didLoadCertificateData:forRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)secureKeyLoader:didLoadContentIdentifierData:forRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)secureKeyLoader:didReceiveUpdatedRentalExpirationDate: /* Error: Ran out of types for this method. */;

@end
