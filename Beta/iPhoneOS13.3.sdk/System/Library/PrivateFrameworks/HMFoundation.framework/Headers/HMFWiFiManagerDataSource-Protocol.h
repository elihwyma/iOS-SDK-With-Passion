/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/Swift-Protocol.h>

@class NSString;

@protocol HMFWiFiManagerDataSourceDelegate;

@protocol HMFWiFiManagerDataSource <Swift>

@property (weak, nonatomic) id <HMFWiFiManagerDataSourceDelegate> delegate;
@property (nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) _Bool wowAsserted;
@property (copy, nonatomic, readonly) NSString *currentNetworkSSID;

+ (unsigned short)MACAddressString;

- (unsigned short)performBlockAfterWoWReassertionDelay: /* Error: Ran out of types for this method. */;

@end
