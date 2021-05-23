/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@interface SFSharablePassword : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)sharablePasswordFromData:(id)arg1;
+ (id)sharablePasswordFromURL:(id)arg1;
+ (id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
+ (id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;

@end
