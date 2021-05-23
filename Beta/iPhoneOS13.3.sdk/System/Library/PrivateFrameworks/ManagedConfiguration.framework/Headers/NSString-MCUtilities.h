/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)

+ (id)MCMakeUUID;

- (id)MCAppendDeviceName;
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;
- (id)MCHashedIdentifier;
- (id)MCSHA256DigestWithSalt:(id)arg1;
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;
- (unsigned int)MCHash;
- (id)MCHashedFilenameWithExtension:(id)arg1;
- (id)MCOldStyleSafeFilenameHash;
- (id)MCSHA256DigestWithPasscodeSalt;
- (id)MCAppendGreenteaSuffix;
- (id)MCRemoveAppExternalVersionIDParameter;

@end
