/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <AccessoryMediaLibrary/Swift-Protocol.h>

@protocol ACCMediaLibraryXPCServerProtocol <Swift>

- (unsigned short)initConnection: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyAvailableLibraries:provider: /* Error: Ran out of types for this method. */;
- (unsigned short)notify:stateChange:enabled: /* Error: Ran out of types for this method. */;
- (unsigned short)update:updates:accessory: /* Error: Ran out of types for this method. */;
- (unsigned short)update:revision:content:accessory: /* Error: Ran out of types for this method. */;
- (unsigned short)resetUpdate:accessory: /* Error: Ran out of types for this method. */;

@end
