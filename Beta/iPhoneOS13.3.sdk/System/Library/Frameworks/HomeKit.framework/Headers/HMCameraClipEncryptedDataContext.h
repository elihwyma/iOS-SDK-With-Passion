/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject

{
    NSData *_initializationVector;
    NSData *_ciphertext;
    NSData *_tag;
}

@property (copy, readonly) NSData *initializationVector;
@property (copy, readonly) NSData *ciphertext;
@property (copy, readonly) NSData *tag;
@property (copy, readonly) NSData *dataRepresentation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithInitializationVector:(id)arg1 ciphertext:(id)arg2 tag:(id)arg3;

@end
