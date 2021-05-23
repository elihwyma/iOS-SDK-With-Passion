/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUMomentsControllerDataSourceDelegate;

@protocol TUMomentsControllerDataSource <Swift>

@property (weak, nonatomic) id <TUMomentsControllerDataSourceDelegate> delegate;

- (unsigned short)invalidate;
- (unsigned short)startRequestWithMediaType:forStreamToken:requesteeID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)endRequestWithTransactionID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerStreamToken:requesterID:remoteIDSDestinations:remoteMomentsAvailable:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterStreamToken:completion: /* Error: Ran out of types for this method. */;

@end
