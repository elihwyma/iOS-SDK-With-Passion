/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject

{
    unsigned char _unsignedCharValue;
}

@property (nonatomic, readonly) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithUnsignedCharValue:(unsigned char)arg1;

@end
