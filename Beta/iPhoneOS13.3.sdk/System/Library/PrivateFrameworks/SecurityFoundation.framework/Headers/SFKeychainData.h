/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <Swift>

{
    id _keychainDataInternal;
}

@property (readonly) NSData *data;
@property (retain, nonatomic) SFKeychainDataAttributes *attributes;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
