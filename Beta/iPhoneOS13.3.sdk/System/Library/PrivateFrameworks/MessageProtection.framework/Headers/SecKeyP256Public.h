/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecKeyP256Public : NSObject

{
    struct __SecKey *_publicKeyRef;
    NSData *_serializedKey;
}

@property struct __SecKey *publicKeyRef;
@property (retain) NSData *serializedKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (_Bool)verifySignature:(id)arg1 data:(id)arg2;
- (id)initWithSecKeyRef:(struct __SecKey *)arg1;

@end
