/*
 Image: /System/Library/PrivateFrameworks/SMBClientProvider.framework/SMBClientProvider
 */

@protocol LiveFSMount

- (unsigned short)LiveMountList: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountListenerForVolume:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountEjectVolume:withFlags:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountEjectDisk:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountListenerForVolume:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountSharesAtServer:credentialType:credential:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountAddVolume:atServer:credentialType:credential:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountAddDisk:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountAddVolume:withListener:andWithDescription:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)LiveMountCredentialTypes: /* Error: Ran out of types for this method. */;

@end
