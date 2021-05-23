/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _SFSharablePasswordEncryptionInformation : NSObject

{
    NSData *_encryptedPasswordData;
    NSData *_encryptionKeyReference;
}

@property (copy, nonatomic, readonly) NSData *encryptedPasswordData;
@property (copy, nonatomic, readonly) NSData *encryptionKeyReference;

- (id)initWithEncryptedPasswordData:(id)arg1 encryptionKeyReference:(id)arg2;

@end
