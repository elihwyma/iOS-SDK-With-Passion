/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <SidecarCore/Swift-Protocol.h>

@protocol SidecarRelay_Interface <Swift>

- (unsigned short)relayRegisterServiceProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)relayServiceProviderReady: /* Error: Ran out of types for this method. */;
- (unsigned short)relayOptOutOfReconnect: /* Error: Ran out of types for this method. */;
- (unsigned short)relayRegisterServicePresenter: /* Error: Ran out of types for this method. */;
- (unsigned short)relayServicePresenterReady:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relayDevicesForServiceIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySessionOpen:reconnect:serviceIdentifier:destination:transport:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySession:sendOPACKData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySessionClose:error:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySessionDealloc:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySession:connectStreamType:flags:identifier:processUniqueID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySession:listenStreamType:flags:identifier:processUniqueID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySession:closeStream: /* Error: Ran out of types for this method. */;
- (unsigned short)relaySession:timeSyncWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)relayDiagnose: /* Error: Ran out of types for this method. */;

@end
