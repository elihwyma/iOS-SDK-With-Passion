/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@protocol P256PublicKeyProtocol;

__attribute__((visibility("hidden")))
@interface PublicKey : NSObject

{
    id <P256PublicKeyProtocol> _key;
}

@property (retain) id <P256PublicKeyProtocol> key;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end
