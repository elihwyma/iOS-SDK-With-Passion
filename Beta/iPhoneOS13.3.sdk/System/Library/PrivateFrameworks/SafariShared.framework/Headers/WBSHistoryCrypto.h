/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface WBSHistoryCrypto : NSObject

{
    NSData *_cachedCryptographicKey;
    NSData *_salt;
}

@property (nonatomic, readonly) NSData *salt;
@property (nonatomic, readonly) NSData *cryptographicKey;

- (id)init;
- (id)decryptDictionary:(id)arg1;
- (id)encryptDictionary:(id)arg1;
- (id)initWithCryptographicKey:(id)arg1 salt:(id)arg2;
- (id)_createCryptographicKey;
- (id)_createOrLoadCryptographicKey;

@end
