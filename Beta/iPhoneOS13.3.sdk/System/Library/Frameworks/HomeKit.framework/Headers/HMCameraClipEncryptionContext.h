/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSData;

@interface HMCameraClipEncryptionContext : NSObject <Swift>

{
    NSData *_key;
    unsigned long long _scheme;
}

@property (copy, readonly) NSData *key;
@property (readonly) unsigned long long scheme;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 scheme:(unsigned long long)arg2;

@end
