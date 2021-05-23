/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MRCryptoPairingIdentity : NSObject

{
    NSString *_identifier;
    NSData *_publicKey;
    NSData *_privateKey;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) NSData *privateKey;

- (id)init;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;

@end
