/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSDictionary;

@protocol TUCallProviderManagerDataSourceDelegate;

@protocol TUCallProviderManagerDataSource <Swift>

@property (nonatomic, readonly) _Bool currentProcessCanAccessInitialState;
@property (copy, nonatomic, readonly) NSDictionary *providersByIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *localProvidersByIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property (weak, nonatomic) id <TUCallProviderManagerDataSourceDelegate> delegate;

- (unsigned short)invalidate;
- (unsigned short)donateUserIntentForProviderWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)openURL:isSensitive:error: /* Error: Ran out of types for this method. */;
- (unsigned short)launchAppForDialRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)blockUntilInitialStateReceived;

@end
